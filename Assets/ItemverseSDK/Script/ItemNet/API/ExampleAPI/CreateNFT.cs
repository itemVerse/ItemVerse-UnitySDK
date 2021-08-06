using System;
using System.Collections.Generic;
using System.Threading.Tasks;

using Newtonsoft.Json;

namespace SASEULAPI
{
    public class CreateNFT : SaseulApi
    {
        private static CreateNFT _instance = null;
        public static CreateNFT Instance
        {
            get
            {
                if (_instance == null) { _instance = new CreateNFT(); }
                return _instance;
            }
        }

        private class CreateNFTStructure
        {
            public string type;
            public string @class;
            public string name;
            public string thumbnail;
            public Dictionary<string, string> metadata;
            public long timestamp;
        }

        private async Task Logic(string privateKey, string @class, string name, string thumbnail, Dictionary<string, string> metadata)
        {
            try
            {
                // check privateKey
                SaseulUtil.Instance.CheckPrivateKey(privateKey);
                // check enter value
                SaseulUtil.Instance.CheckEnterValue(@class);
                SaseulUtil.Instance.CheckEnterValue(name);
                SaseulUtil.Instance.CheckEnterValue(thumbnail);

                // Process
                await Task.Run(() =>
                {
                    string publicKey = SASEULEnc.MakePublicKey(privateKey);
                    string address = SASEULEnc.MakeAddress(publicKey);

                    CreateNFTStructure structure = new CreateNFTStructure();
                    structure.type = "CreateNFT";
                    structure.@class = @class;
                    structure.name = name;
                    structure.thumbnail = thumbnail;
                    structure.metadata = metadata;
                    structure.timestamp = DateTimeOffset.Now.ToUnixTimeMilliseconds() * 1000;

                    string transaction = JsonConvert.SerializeObject(structure);
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

        public async Task<Tuple<string, bool>> Call(string privateKey, string @class, string name, string thumbnail, Dictionary<string, string> metadata)
        {
            Init();
            await Logic(privateKey, @class, name, thumbnail, metadata);

            return new Tuple<string, bool>(result, status);
        }
    }
}