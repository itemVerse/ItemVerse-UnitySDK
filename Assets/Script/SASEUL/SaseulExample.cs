using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;
using SASEULAPI;

public class SaseulExample : MonoBehaviour
{
    string privateKey = "1897fcb99a60b6470f5fe5707c94d61f08a5cb2c22ffa267bc782f30615caab6";
    string publicKey = "";
    string address = "0x6f9018756c742968c11cf2a6081939cba4a4aeec6ad69c";
    string toAddress = "";

    int page = 1;
    int count = 1;
    int sort = -1;

    string nftuuid = "0x1af28279110af2f143ad73d5d99634af1ffaa5ae8e81";

    void Start()
    {
        Example_NFTCount();
    }


    void Example_ListNFT()
    {
        var api = new ListNFT();

        api.Call(address, page, count, sort, (string result, bool status) =>
        {
            Debug.Log(result);
        });
    }

    void Example_GetNFT()
    {
        var api = new GetNFT();

        api.Call(nftuuid, (string result, bool status) =>
        {
            Debug.Log(result);
        });
    }

    void Example_GetNFTCBalance()
    {
        var api = new GetNFTCBalance();

        api.Call(address, (string result, bool status) =>
        {
            Debug.Log(result);
        });
    }

    void Example_NFTCount()
    {
        var api = new NFTCount();

        api.Call((string result, bool status) =>
        {
            Debug.Log(result);
        });
    }

    void Example_FaucetNFTC()
    {
        var api = new FaucetNFTC();

        api.Call(privateKey, (string result, bool status) =>
        {
            Debug.Log(result);
        });
    }
}