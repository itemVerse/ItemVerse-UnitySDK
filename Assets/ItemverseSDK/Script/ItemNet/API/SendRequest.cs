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
            try
            {
                // check enter value
                SaseulUtil.Instance.CheckEnterValue(requestData);

                // Process
                form.AddField("request", requestData);

                // Return
                result = await Send("/request");
                status = true;
            } catch(Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string requestData)
        {
            Init();
            await Logic(requestData);

            return new Tuple<string, bool>(result, status);
        }
    }
}
