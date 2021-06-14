using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using System.Threading.Tasks;

using UnityEngine;

using Newtonsoft.Json;

namespace SASEULAPI
{
    public class CreateNFTC : SaseulApi
    {
        private class CreateNFTCStructure
        {
            public string type;
            public long timestamp;
        }

        private async Task Logic(string privateKey)
        {
            await Task.Run(() =>
            {
                CreateNFTCStructure structure = new CreateNFTCStructure();

                string publicKey = SASEULEnc.MakePublicKey(privateKey);
                string address = SASEULEnc.MakeAddress(publicKey);

                structure.type = "CreateNFTC";
                structure.timestamp = DateTimeOffset.Now.ToUnixTimeMilliseconds() * 1000;

                string transaction = JsonConvert.SerializeObject(structure);
                string thash = SASEULEnc.THash(transaction);
                string signature = SASEULEnc.MakeSignature(thash, privateKey, publicKey);

                form.AddField("transaction", transaction);
                form.AddField("thash", thash);
                form.AddField("public_key", publicKey);
                form.AddField("signature", signature);
            });
        }

        public async Task<Tuple<string, bool>> Call(string privateKey)
        {
            Init();
            await Logic(privateKey);
            await Send("/sendtransaction");

            return new Tuple<string, bool>(result, status);
        }
    }
}