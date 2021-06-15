using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using System.Threading.Tasks;

using UnityEngine;

using Newtonsoft.Json;

namespace SASEULAPI
{
    public class SendTransaction : SaseulApi
    {
        private static SendTransaction _instance = null;
        public static SendTransaction Instance
        {
            get
            {
                if (_instance == null) { _instance = new SendTransaction(); }
                return _instance;
            }
        }

        private async Task Logic(string privateKey, string transactionData)
        {
            await Task.Run(() =>
            {
                string publicKey = SASEULEnc.MakePublicKey(privateKey);
                string address = SASEULEnc.MakeAddress(publicKey);

                string transaction = transactionData;
                string thash = SASEULEnc.THash(transaction);
                string signature = SASEULEnc.MakeSignature(thash, privateKey, publicKey);

                form.AddField("transaction", transaction);
                form.AddField("thash", thash);
                form.AddField("public_key", publicKey);
                form.AddField("signature", signature);
            });
        }

        public async Task<Tuple<string, bool>> Call(string privateKey, string transactionData)
        {
            Init();
            await Logic(privateKey, transactionData);
            await Send("/sendtransaction");

            return new Tuple<string, bool>(result, status);
        }
    }
}