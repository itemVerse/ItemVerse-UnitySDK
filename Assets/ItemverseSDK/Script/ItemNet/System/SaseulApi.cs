using System;
using System.Threading.Tasks;

using UnityEngine;
using UnityEngine.Networking;

namespace SASEULAPI
{
    public class SaseulApi
    {
        public WWWForm form = new WWWForm();

        public string result = null;
        public bool status = false;

        public void Init()
        {
            result = null;
            status = false;
            form = new WWWForm();
        }

        public async Task<string> Send(string apiUrl)
        {
            try
            {
                using (UnityWebRequest www = UnityWebRequest.Post(ItemNetStatus.Instance._url + apiUrl, form))
                {
                    await www.SendWebRequest();

                    if (www.error != null) throw new Exception(www.downloadHandler.text.ToString());

                    return www.downloadHandler.text.ToString();
                }
            } catch (Exception e)
            {
                throw e;
            }
        }
    }
}