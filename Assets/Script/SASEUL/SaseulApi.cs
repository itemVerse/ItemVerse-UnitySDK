using System;
using System.Collections;
using System.Numerics;
using System.Threading.Tasks;
using System.Runtime.CompilerServices;

using UnityEngine;
using UnityEngine.Networking;

public class SaseulApi
{
    public string result = null;
    public bool status = false;
    public WWWForm form = new WWWForm();

    public async Task Send(string apiUrl)
    {
        UnityWebRequest www = UnityWebRequest.Post(SaseulStatus.Instance._url + apiUrl, form);

        await www.SendWebRequest();

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