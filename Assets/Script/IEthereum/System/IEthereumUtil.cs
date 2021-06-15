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

        IEthereumStatus.Instance._web3 = new Web3(IEthereumStatus.Instance._infuraUrl);
    }

    public void LoginWeb3(string privateKey)
    {
        Account account = new Account(privateKey);
        IEthereumStatus.Instance._web3 = new Web3(account, IEthereumStatus.Instance._infuraUrl);
    }
}