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
            try
            {
                // check nftuuid
                SaseulUtil.Instance.CheckNFTUUID(nftuuid);

                // Process
                GetNFTStructure structure = new GetNFTStructure();
                structure.type = "GetNFT";
                structure.nftuuid = nftuuid;

                string request = JsonUtility.ToJson(structure);

                form.AddField("request", request);

                // Return
                result = await Send("/request");
                status = true;
            } catch(Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string nftuuid)
        {
            Init();
            await Logic(nftuuid);

            return new Tuple<string, bool>(result, status);
        }
    }
}
