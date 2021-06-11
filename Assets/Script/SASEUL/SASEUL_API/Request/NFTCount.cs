using System;
using System.Collections;
using System.Numerics;
using System.Threading.Tasks;

using UnityEngine;

namespace SASEULAPI
{
    public class NFTCount : SaseulApi
    {
        private class NFTCountStructure
        {
            public string type;
        }

        private async Task Logic()
        {
            await Task.Run(() =>
            {
                NFTCountStructure structure = new NFTCountStructure();

                structure.type = "NFTCount";

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
        private async Task Run()
        {
            Init();
            await Logic();
            await Send("/request");
        }
        public async void Call()
        {
            await Run();
        }
        public async void Call(Action<string> callback)
        {
            await Run();
            callback(result);
        }
        public async void Call(Action<bool> callback)
        {
            await Run();
            callback(status);
        }
        public async void Call(Action<string, bool> callback)
        {
            await Run();
            callback(result, status);
        }
        public async void Call(Action<bool, string> callback)
        {
            await Run();
            callback(status, result);
        }
    }
}
