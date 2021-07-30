using System.Threading.Tasks;

using UnityEngine;
using UnityEngine.Networking;

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

        if (www.error != null)
        {
            result = www.downloadHandler.text.ToString();
            status = false;
        }
        else
        {
            result = www.downloadHandler.text.ToString();
            status = true;
        }
    }
}