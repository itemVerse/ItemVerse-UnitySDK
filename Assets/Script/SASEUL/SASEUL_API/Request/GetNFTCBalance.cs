using System;
using System.Collections;
using System.Numerics;
using System.Threading.Tasks;

using UnityEngine;

namespace SASEULAPI
{
    public class GetNFTCBalance : SaseulApi
    {
        private class GetNFTCBalanceStructure
        {
            public string type;
            public string from;
        }

        private async Task Logic(string from)
        {
            await Task.Run(() =>
            {
                GetNFTCBalanceStructure structure = new GetNFTCBalanceStructure();

                structure.type = "GetNFTCBalance";
                structure.from = from;

                string request = JsonUtility.ToJson(structure);

                form.AddField("request", request);
            });
        }

        private void Init()
        {
            result = null;
            status = false;
            form = new WWWForm();
        }
        private async Task Run(string from)
        {
            Init();
            await Logic(from);
            await Send("/request");
        }
        public async void Call(string from)
        {
            await Run(from);
        }
        public async void Call(string from, Action<string> callback)
        {
            await Run(from);
            callback(result);
        }
        public async void Call(string from, Action<bool> callback)
        {
            await Run(from);
            callback(status);
        }
        public async void Call(string from, Action<string, bool> callback)
        {
            await Run(from);
            callback(result, status);
        }
        public async void Call(string from, Action<bool, string> callback)
        {
            await Run(from);
            callback(status, result);
        }
    }
}
