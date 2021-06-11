using System;
using System.Collections;
using System.Numerics;
using System.Threading.Tasks;

using UnityEngine;

namespace SASEULAPI
{
    public class FaucetNFTC : SaseulApi
    {
        private class FaucetNFTCStructure
        {
            public string type;
            public string version;
            public string from;
            public long timestamp;
        }

        private void Init()
        {
            result = null;
            status = false;
            form = new WWWForm();
        }

        private async Task Logic(string privateKey)
        {
            await Task.Run(() =>
            {
                FaucetNFTCStructure structure = new FaucetNFTCStructure();

                string publicKey = SASEULEnc.MakePublicKey(privateKey);
                string address = SASEULEnc.MakeAddress(publicKey);

                structure.type = "FaucetNFTC";
                structure.version = SaseulStatus.Instance.version;
                structure.from = address;
                structure.timestamp = DateTimeOffset.Now.ToUnixTimeMilliseconds() * 1000;

                string transaction = JsonUtility.ToJson(structure);
                string thash = SASEULEnc.THash(transaction);
                string signature = SASEULEnc.MakeSignature(thash, privateKey, publicKey);

                form.AddField("transaction", transaction);
                form.AddField("thash", thash);
                form.AddField("public_key", publicKey);
                form.AddField("signature", signature);
            });
        }

        public async void Call(string privateKey, Action<string, bool> callback)
        {
            Init();
            await Logic(privateKey);
            await Send("/sendtransaction");
            callback(result, status);
        }
    }
}