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
    public class ERC721_TokenOfOwnerByIndex : EthereumApi
    {
        [Function("tokenOfOwnerByIndex", "uint256")]
        public class TokenOfOwnerByIndexFunction : FunctionMessage
        {
            [Parameter("address", "_owner", 1)]
            public string Owner { get; set; }

            [Parameter("uint256", "_index", 2)]
            public BigInteger Index { get; set; }
        }

        private async Task Logic(string address, BigInteger index, string contractAddress)
        {
            var abi = new TokenOfOwnerByIndexFunction()
            {
                Owner = address,
                Index = index,
            };

            var handler = EthereumStatus.Instance._web3.Eth.GetContractQueryHandler<TokenOfOwnerByIndexFunction>();

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

        public void Call(string address, BigInteger index, string contractAddress, Action callback)
        {
            Logic(address, index, contractAddress).ContinueWith(task =>
            {
                callback();
            });
        }
        public void Call(string address, BigInteger index, string contractAddress, Action<string, bool> callback)
        {
            Logic(address, index, contractAddress).ContinueWith(task =>
            {
                callback(result, status);
            });
        }
    }
}
