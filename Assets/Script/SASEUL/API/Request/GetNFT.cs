using System;
using System.Threading.Tasks;

using UnityEngine;

namespace SASEULAPI
{
    public class GetNFT : SaseulApi
    {
        private static GetNFT _instance = null;
        public static GetNFT Instance
        {
            get
            {
                if (_instance == null) { _instance = new GetNFT(); }
                return _instance;
            }
        }

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
