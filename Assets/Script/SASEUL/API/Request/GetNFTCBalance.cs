using System;
using System.Threading.Tasks;

using UnityEngine;

namespace SASEULAPI
{
    public class GetNFTCBalance : SaseulApi
    {
        private static GetNFTCBalance _instance = null;
        public static GetNFTCBalance Instance
        {
            get
            {
                if (_instance == null) { _instance = new GetNFTCBalance(); }
                return _instance;
            }
        }

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

        public async Task<Tuple<string, bool>> Call(string from)
        {
            Init();
            await Logic(from);
            await Send("/request");

            return new Tuple<string, bool>(result, status);
        }
    }
}
