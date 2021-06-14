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

        public async Task<Tuple<string, bool>> Call(string nftuuid)
        {
            Init();
            await Logic(nftuuid);
            await Send("/request");

            return new Tuple<string, bool>(result, status);
        }
    }
}
