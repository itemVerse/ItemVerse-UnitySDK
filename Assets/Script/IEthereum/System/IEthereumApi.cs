using UnityEngine;
using Nethereum.Web3;
using Nethereum.Web3.Accounts;
using Nethereum.Hex.HexConvertors.Extensions;

public class IEthereumApi
{
    public string result = null;
    public bool status = false;

    public void Init()
    {
        result = null;
        status = false;
    }
}
