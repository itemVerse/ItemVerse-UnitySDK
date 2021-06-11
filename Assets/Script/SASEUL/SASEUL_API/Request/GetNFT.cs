using System;
using System.Collections;
using System.Numerics;
using System.Threading.Tasks;

using UnityEngine;

namespace SASEULAPI
{
    public class GetNFT : SaseulApi
    {
        private class GetNFTStructure
        {
            public string type;
            public string nftuuid;
        }

        private async Task Logic(string nftuuid)
        {
            await Task.Run(() =>
            {
                GetNFTStructure structure = new GetNFTStructure();

                structure.type = "GetNFT";
                structure.nftuuid = nftuuid;

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
        private async Task Run(string nftuuid)
        {
            Init();
            await Logic(nftuuid);
            await Send("/request");
        }
        public async void Call(string nftuuid)
        {
            await Run(nftuuid);
        }
        public async void Call(string nftuuid, Action<string> callback)
        {
            await Run(nftuuid);
            callback(result);
        }
        public async void Call(string nftuuid, Action<bool> callback)
        {
            await Run(nftuuid);
            callback(status);
        }
        public async void Call(string nftuuid, Action<string, bool> callback)
        {
            await Run(nftuuid);
            callback(result, status);
        }
        public async void Call(string nftuuid, Action<bool, string> callback)
        {
            await Run(nftuuid);
            callback(status, result);
        }
    }
}
