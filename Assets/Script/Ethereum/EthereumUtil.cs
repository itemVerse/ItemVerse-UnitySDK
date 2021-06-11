using UnityEngine;
using System.Collections;
using System.Numerics;

using Nethereum.Web3;
using Nethereum.Web3.Accounts;
using Nethereum.Hex.HexConvertors.Extensions;

public static class EthereumUtil
{
    public static Account NewAccount()
    {
        var key = Nethereum.Signer.EthECKey.GenerateKey();
        var privateKey = key.GetPrivateKeyAsBytes().ToHex();
        var account = new Account(privateKey);

        return account;
    }

    public static void SetNetwork(string nettype)
    {
        EthereumStatus.Instance.netType = nettype;

        switch (EthereumStatus.Instance.netType)
        {
            case "main":
                EthereumStatus.Instance._infuraUrl = EthereumStatus.Instance.mainnetInfuraUrl;
                EthereumStatus.Instance._chainId = EthereumStatus.Instance.mainnetChainId;
                break;
            case "ropsten":
                EthereumStatus.Instance._infuraUrl = EthereumStatus.Instance.ropstenInfuraUrl;
                EthereumStatus.Instance._chainId = EthereumStatus.Instance.ropstenChainId;
                break;
        }

        EthereumStatus.Instance._web3 = new Web3(EthereumStatus.Instance._infuraUrl);
    }

    public static void LoginWeb3(string privateKey)
    {
        Account account = new Account(privateKey);
        EthereumStatus.Instance._web3 = new Web3(account, EthereumStatus.Instance._infuraUrl);
    }
}
