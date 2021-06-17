using System;
using System.Collections.Generic;
using System.Threading.Tasks;

using UnityEngine;

using Newtonsoft.Json;

namespace SASEULAPI
{
    public class SendRequest : SaseulApi
    {
        private static SendRequest _instance = null;
        public static SendRequest Instance
        {
            get
            {
                if (_instance == null) { _instance = new SendRequest(); }
                return _instance;
            }
        }

        private async Task Logic(string requestData)
        {
            await Task.Run(() =>
            {
                form.AddField("request", requestData);
            });
        }

        public async Task<Tuple<string, bool>> Call(string requestData)
        {
            Init();
            await Logic(requestData);
            await Send("/request");

            return new Tuple<string, bool>(result, status);
        }
    }
}
