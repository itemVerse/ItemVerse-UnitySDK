using System.Net;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;

using UnityEngine;

using Nethereum.Web3;
using Nethereum.Web3.Accounts;
using Nethereum.Hex.HexConvertors.Extensions;

public class IEthereumUtil
{
    private static IEthereumUtil _instance = null;
    public static IEthereumUtil Instance
    {
        get
        {
            if (_instance == null) { _instance = new IEthereumUtil(); }
            return _instance;
        }
    }

    public Account NewAccount()
    {
        var key = Nethereum.Signer.EthECKey.GenerateKey();
        var privateKey = key.GetPrivateKeyAsBytes().ToHex();
        var account = new Account(privateKey);

        return account;
    }

    public bool TrustCertificate(object sender, X509Certificate x509Certificate, X509Chain x509Chain, SslPolicyErrors sslPolicyErrors)
    {
        return true;
    }
    public void SetNetwork(string nettype)
    {
        IEthereumStatus.Instance.netType = nettype;

        switch (IEthereumStatus.Instance.netType)
        {
            case "main":
                IEthereumStatus.Instance._infuraUrl = IEthereumStatus.Instance.mainnetInfuraUrl;
                IEthereumStatus.Instance._chainId = IEthereumStatus.Instance.mainnetChainId;
                break;
            case "ropsten":
                IEthereumStatus.Instance._infuraUrl = IEthereumStatus.Instance.ropstenInfuraUrl;
                IEthereumStatus.Instance._chainId = IEthereumStatus.Instance.ropstenChainId;
                break;
        }

        System.Net.ServicePointManager.SecurityProtocol |= SecurityProtocolType.Tls12;
        System.Net.ServicePointManager.ServerCertificateValidationCallback = TrustCertificate;

        Debug.Log(IEthereumStatus.Instance._infuraUrl);

        Account account = new Account("74945e566f482e022cbd0afba6b4c2ae15781f3551b0966e626c16fe432ec45e");
        IEthereumStatus.Instance._web3 = new Web3(account, IEthereumStatus.Instance._infuraUrl);
    }

    public void LoginWeb3(string privateKey)
    {
        Account account = new Account(privateKey);
        IEthereumStatus.Instance._web3 = new Web3(account, IEthereumStatus.Instance._infuraUrl);
    }
}