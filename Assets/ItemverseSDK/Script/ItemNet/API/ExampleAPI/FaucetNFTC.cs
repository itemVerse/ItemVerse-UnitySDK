using System;
using System.Threading.Tasks;

using UnityEngine;

namespace SASEULAPI
{
    public class FaucetNFTC : SaseulApi
    {
        private static FaucetNFTC _instance = null;
        public static FaucetNFTC Instance
        {
            get
            {
                if (_instance == null) { _instance = new FaucetNFTC(); }
                return _instance;
            }
        }

        private class FaucetNFTCStructure
        {
            public string type;
            public string version;
            public string from;
            public long timestamp;
        }

        private async Task Logic(string privateKey)
        {
            try
            {
                // check privateKey
                SaseulUtil.Instance.CheckPrivateKey(privateKey);

                // Process
                await Task.Run(() =>
                {
                    string publicKey = SASEULEnc.MakePublicKey(privateKey);
                    string address = SASEULEnc.MakeAddress(publicKey);

                    FaucetNFTCStructure structure = new FaucetNFTCStructure();
                    structure.type = "FaucetNFTC";
                    structure.version = ItemNetStatus.Instance.version;
                    structure.from = address;
                    structure.timestamp = DateTimeOffset.Now.ToUnixTimeMilliseconds() * 1000;

                    string transaction = JsonUtility.ToJson(structure);
                    string thash = SASEULEnc.THash(transaction);
                    string signature = SASEULEnc.MakeSignature(thash, privateKey);

                    form.AddField("transaction", transaction);
                    form.AddField("thash", thash);
                    form.AddField("public_key", publicKey);
                    form.AddField("signature", signature);
                });

                // Return
                result = await Send("/sendtransaction");
                status = true;
            } catch(Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string privateKey)
        {
            Init();
            await Logic(privateKey);

            return new Tuple<string, bool>(result, status);
        }
    }
}