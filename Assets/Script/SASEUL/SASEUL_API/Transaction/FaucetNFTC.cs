using System;
using System.Collections;
using System.Numerics;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

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

        private WWWForm Logic(string privateKey)
        {
            FaucetNFTCStructure structure = new FaucetNFTCStructure();
            WWWForm form = new WWWForm();

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

            return form;
        }

        public IEnumerator Call(string privateKey, Action callback)
        {
            WWWForm form = Logic(privateKey);

            yield return Send("/sendtransaction", form);

            callback();
        }
        public IEnumerator Call(string privateKey, Action<string, bool> callback)
        {
            WWWForm form = Logic(privateKey);

            yield return Send("/sendtransaction", form);

            callback(result, status);
        }
    }
}