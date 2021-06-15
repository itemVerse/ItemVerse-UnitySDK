using System;
using System.Threading.Tasks;

using UnityEngine;

namespace SASEULAPI
{
    public class NFTCount : SaseulApi
    {
        private static NFTCount _instance = null;
        public static NFTCount Instance
        {
            get
            {
                if (_instance == null) { _instance = new NFTCount(); }
                return _instance;
            }
        }

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

        public async Task<Tuple<string, bool>> Call()
        {
            Init();
            await Logic();
            await Send("/request");

            return new Tuple<string, bool>(result, status);
        }
    }
}
