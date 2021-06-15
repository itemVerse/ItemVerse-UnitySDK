using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using System.Threading.Tasks;

using UnityEngine;

using Newtonsoft.Json;

namespace SASEULAPI
{
    public class SendRawTransaction : SaseulApi
    {
        private static SendRawTransaction _instance = null;
        public static SendRawTransaction Instance
        {
            get
            {
                if (_instance == null) { _instance = new SendRawTransaction(); }
                return _instance;
            }
        }

        private async Task Logic(string transaction, string thash, string publicKey, string signature)
        {
            await Task.Run(() =>
            {
                form.AddField("transaction", transaction);
                form.AddField("thash", thash);
                form.AddField("public_key", publicKey);
                form.AddField("signature", signature);
            });
        }

        public async Task<Tuple<string, bool>> Call(string transaction, string thash, string publicKey, string signature)
        {
            Init();
            await Logic(transaction, thash, publicKey, signature);
            await Send("/sendtransaction");

            return new Tuple<string, bool>(result, status);
        }
    }
}