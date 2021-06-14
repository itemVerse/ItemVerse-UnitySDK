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

        public async Task<Tuple<string, bool>> Call(string from)
        {
            Init();
            await Logic(from);
            await Send("/request");

            return new Tuple<string, bool>(result, status);
        }
    }
}
