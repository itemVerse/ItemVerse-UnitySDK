using System;

using UnityEngine;

using Nethereum.Web3;

public class IEthereumStatus : MonoBehaviour
{
    private static IEthereumStatus _instance = null;
    public static IEthereumStatus Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.Find("IEthereumStatus").GetComponent<IEthereumStatus>();
            }

            return _instance;
        }
    }

    private void Awake()
    {
        IEthereumUtil.Instance.SetNetwork(IEthereumStatus.Instance.netType);
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
