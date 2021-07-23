using System;
using System.Net;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;

using UnityEngine;

using Nethereum.Web3;

public class IEthereumStatus : MonoBehaviour
{
    public static IEthereumStatus Instance;

    private bool TrustCertificate(object sender, X509Certificate x509Certificate, X509Chain x509Chain, SslPolicyErrors sslPolicyErrors)
    {
        return true;
    }

    private void Awake()
    {
        Instance = gameObject.GetComponent<IEthereumStatus>();

        ServicePointManager.SecurityProtocol |= SecurityProtocolType.Tls12;
        ServicePointManager.ServerCertificateValidationCallback = TrustCertificate;
        IEthereumUtil.Instance.SetNetwork(IEthereumStatus.Instance.netType);
    }

    public string netType = "ropsten"; // main, ropsten, etc

    public string mainInfuraUrl = "https://mainnet.infura.io/v3/fc3485d7dd30453f9bdcf29c4b226787";
    [NonSerialized] public int mainnetChainId = 1;

    public string ropstenInfuraUrl = "https://ropsten.infura.io/v3/fc3485d7dd30453f9bdcf29c4b226787";
    [NonSerialized] public int ropstenChainId = 3;

    public string etcInfuraUrl = "";
    public int etcChainId = 0;

    [NonSerialized] public string _infuraUrl = "";
    [NonSerialized] public int _chainId = 0;
    [NonSerialized] public Web3 _web3 = null;
}
