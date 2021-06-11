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
    public class ERC721_TokenURI : EthereumApi
    {
        [Function("tokenURI", "string")]
        public class TokenURIFunction : FunctionMessage
        {
            [Parameter("uint256", "_tokenId", 1)]
            public BigInteger TokenId { get; set; }
        }

        private async Task Logic(BigInteger tokenId, string contractAddress)
        {
            var abi = new TokenURIFunction()
            {
                TokenId = tokenId,
            };

            var handler = EthereumStatus.Instance._web3.Eth.GetContractQueryHandler<TokenURIFunction>();

            try
            {
                var value = await handler.QueryAsync<string>(contractAddress, abi);

                result = value.ToString();
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public void Call(BigInteger tokenId, string contractAddress, Action callback)
        {
            Logic(tokenId, contractAddress).ContinueWith(task =>
            {
                callback();
            });
        }
        public void Call(BigInteger tokenId, string contractAddress, Action<string, bool> callback)
        {
            Logic(tokenId, contractAddress).ContinueWith(task =>
            {
                callback(result, status);
            });
        }
    }
}
