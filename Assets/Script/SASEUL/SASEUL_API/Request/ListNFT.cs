using System;
using System.Collections;
using System.Numerics;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

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

        private WWWForm Logic(string from, int page, int count, int sort)
        {
            ListNFTStructure structure = new ListNFTStructure();
            WWWForm form = new WWWForm();

            structure.type = "ListNFT";
            structure.from = from;
            structure.page = page;
            structure.count = count;
            structure.sort = sort;

            string request = JsonUtility.ToJson(structure);

            form.AddField("request", request);

            return form;
        }

        public IEnumerator Call(string from, int page, int count, int sort, Action callback)
        {
            WWWForm form = Logic(from, page, count, sort);

            yield return Send("/request", form);

            callback();
        }
        public IEnumerator Call(string from, int page, int count, int sort, Action<string, bool> callback)
        {
            WWWForm form = Logic(from, page, count, sort);

            yield return Send("/request", form);

            callback(result, status);
        }
    }
}
