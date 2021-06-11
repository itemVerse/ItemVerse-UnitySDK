using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using UnityEngine;
using UnityEditor;
using Nethereum.Web3;

public class EthereumStatus : MonoBehaviour
{
    private EthereumStatus() { }
    private static EthereumStatus _instance = null;
    public static EthereumStatus Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.Find("EthereumStatus").GetComponent<EthereumStatus>();

                EthereumUtil.SetNetwork(_instance.netType);
            }

            return _instance;
        }
    }

    public string netType = "ropsten";

    public string mainnetInfuraUrl = "https://mainnet.infura.io/v3/fc3485d7dd30453f9bdcf29c4b226787";
    [NonSerialized] public int mainnetChainId = 1;

    public string ropstenInfuraUrl = "https://ropsten.infura.io/v3/fc3485d7dd30453f9bdcf29c4b226787";
    [NonSerialized] public int ropstenChainId = 3;

    [NonSerialized] public string _infuraUrl;
    [NonSerialized] public int _chainId;
    [NonSerialized] public Web3 _web3 = null;
}
