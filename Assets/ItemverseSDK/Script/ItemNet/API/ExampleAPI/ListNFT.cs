using System;
using System.Threading.Tasks;

using UnityEngine;

namespace SASEULAPI
{
    public class ListNFT : SaseulApi
    {
        private static ListNFT _instance = null;
        public static ListNFT Instance
        {
            get
            {
                if (_instance == null) { _instance = new ListNFT(); }
                return _instance;
            }
        }

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
            try
            {
                // check from 
                SaseulUtil.Instance.CheckAddress(from);

                // Process
                ListNFTStructure structure = new ListNFTStructure();

                structure.type = "ListNFT";
                structure.from = from;
                structure.page = page;
                structure.count = count;
                structure.sort = sort;

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

        public async Task<Tuple<string, bool>> Call(string from, int page, int count, int sort)
        {
            Init();
            await Logic(from, page, count, sort);

            return new Tuple<string, bool> (result, status);
        }

    }
}
