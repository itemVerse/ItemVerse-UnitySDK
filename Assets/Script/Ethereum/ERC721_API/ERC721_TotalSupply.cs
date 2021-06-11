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
    public class ERC721_TotalSupply : EthereumApi
    {
        [Function("totalSupply", "uint256")]
        public class TotalSupplyFunction : FunctionMessage{}

        private async Task Logic(string contractAddress)
        {
            var abi = new TotalSupplyFunction(){};

            var handler = EthereumStatus.Instance._web3.Eth.GetContractQueryHandler<TotalSupplyFunction>();

            try
            {
                var value = await handler.QueryAsync<BigInteger>(contractAddress, abi);

                result = value.ToString();
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public void Call(string contractAddress, Action callback)
        {
            Logic(contractAddress).ContinueWith(task =>
            {
                callback();
            });
        }
        public void Call(string contractAddress, Action<string, bool> callback)
        {
            Logic(contractAddress).ContinueWith(task =>
            {
                callback(result, status);
            });
        }
    }
}
