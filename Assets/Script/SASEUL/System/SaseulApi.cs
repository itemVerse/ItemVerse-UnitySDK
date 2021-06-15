using System.Threading.Tasks;

using UnityEngine;
using UnityEngine.Networking;

using Newtonsoft.Json;

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

    public async Task Send(string apiUrl)
    {
        UnityWebRequest www = UnityWebRequest.Post(ItemNetStatus.Instance._url + apiUrl, form);

        await www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
            Debug.Log(JsonConvert.SerializeObject(www));
            result = www.error.ToString();
            status = false;
        }
        else
        {
            result = www.downloadHandler.text.ToString();
            status = true;
        }
    }
}