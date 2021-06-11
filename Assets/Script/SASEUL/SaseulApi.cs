using System;
using System.Collections;
using System.Numerics;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

public class SaseulApi
{
    public string result = null;
    public bool status = false;

    public IEnumerator Send(string apiUrl, WWWForm form)
    {
        UnityWebRequest www = UnityWebRequest.Post(SaseulStatus.Instance._url + apiUrl, form);
        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
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
