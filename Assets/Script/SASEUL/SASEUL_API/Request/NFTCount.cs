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

        public async Task<Tuple<string, bool>> Call()
        {
            Init();
            await Logic();
            await Send("/request");

            return new Tuple<string, bool>(result, status);
        }
    }
}
