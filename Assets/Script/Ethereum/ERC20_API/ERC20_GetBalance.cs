using System;
using System.Collections;
using System.Numerics;
using System.Threading.Tasks;
using UnityEngine;

using Nethereum.Web3;
using Nethereum.ABI.FunctionEncoding.Attributes;
using Nethereum.Contracts.CQS;
using Nethereum.Util;
using Nethereum.Web3.Accounts;
using Nethereum.Hex.HexConvertors.Extensions;
using Nethereum.Contracts;
using Nethereum.Contracts.Extensions;
using Nethereum.JsonRpc.UnityClient;
using Nethereum.RPC.Eth.DTOs;

namespace EthereumAPI
{
    public class ERC20_GetBalance : EthereumApi
    {
        [Function("balanceOf", "uint256")]
        public class BalanceOfFunction : FunctionMessage
        {
            [Parameter("address", "_owner", 1)]
            public string Owner { get; set; }
        }

        private async Task Logic(string address, string contractAddress)
        {
            var abi = new BalanceOfFunction()
            {
                Owner = address,
            };

            var handler = EthereumStatus.Instance._web3.Eth.GetContractQueryHandler<BalanceOfFunction>();

            try
            {
                var value = await handler.QueryAsync<BigInteger>(contractAddress, abi);

                result = Web3.Convert.FromWei(value, UnitConversion.EthUnit.Ether).ToString();
                status = true;
            } catch(Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public void Call(string address, string contractAddress, Action callback)
        {
            Logic(address, contractAddress).ContinueWith(task =>
            {
                callback();
            });
        }
        public void Call(string address, string contractAddress, Action<string, bool> callback)
        {
            Logic(address, contractAddress).ContinueWith(task =>
            {
                callback(result, status);
            });
        }
    }
}
