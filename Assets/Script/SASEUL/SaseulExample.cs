using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;
using SASEULAPI;

public class SaseulExample : MonoBehaviour
{
    CoroutineManager coroutineManager;

    string privateKey = "1897fcb99a60b6470f5fe5707c94d61f08a5cb2c22ffa267bc782f30615caab6";
    string publicKey = "";
    string address = "";
    string toAddress = "";

    int page = 1;
    int count = 1;
    int sort = -1;

    void Start()
    {
        coroutineManager = GameObject.Find("CoroutineManager").GetComponent<CoroutineManager>();

        Example_FaucetNFTC();
    }


    void Example_ListNFT()
    {
        var api = new ListNFT();
        int key = coroutineManager.MakeKey();

        Coroutine coroutine = StartCoroutine(api.Call(address, page, count, sort, (string result, bool status) =>
        {
            coroutineManager.Delete(key);
            Debug.Log(result);
        }));

        coroutineManager.Add(key, coroutine);
    }

    void Example_FaucetNFTC()
    {
        var api = new FaucetNFTC();
        int key = coroutineManager.MakeKey();

        Coroutine coroutine = StartCoroutine(api.Call(privateKey, (string result, bool status) =>
        {
            coroutineManager.Delete(key);
            Debug.Log(result);
        }));

        coroutineManager.Add(key, coroutine);
    }
}