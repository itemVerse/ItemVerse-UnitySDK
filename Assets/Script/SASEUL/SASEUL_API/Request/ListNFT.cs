using System;
using System.Collections;
using System.Numerics;
using System.Threading.Tasks;

using UnityEngine;

namespace SASEULAPI
{
    public class ListNFT : SaseulApi
    {
        private class ListNFTStructure
        {
            public string type;
            public string from;
            public int page;
            public int count;
            public int sort;
        }

        private async Task Logic(string from, int page, int count, int sort)
        {
            await Task.Run(() =>
            {
                ListNFTStructure structure = new ListNFTStructure();

                structure.type = "ListNFT";
                structure.from = from;
                structure.page = page;
                structure.count = count;
                structure.sort = sort;

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
        private async Task Run(string from, int page, int count, int sort)
        {
            Init();
            await Logic(from, page, count, sort);
            await Send("/request");
        }
        public async void Call(string from, int page, int count, int sort)
        {
            await Run(from, page, count, sort);
        }
        public async void Call(string from, int page, int count, int sort, Action<string> callback)
        {
            await Run(from, page, count, sort);
            callback(result);
        }
        public async void Call(string from, int page, int count, int sort, Action<bool> callback)
        {
            await Run(from, page, count, sort);
            callback(status);
        }
        public async void Call(string from, int page, int count, int sort, Action<string, bool> callback)
        {
            await Run(from, page, count, sort);
            callback(result, status);
        }
        public async void Call(string from, int page, int count, int sort, Action<bool, string> callback)
        {
            await Run(from, page, count, sort);
            callback(status, result);
        }
    }
}
