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
    public class ERC721_Transfer : EthereumApi
    {
        [Function("Transfer", "bool")]
        public class TransferFunction : FunctionMessage
        {
            [Parameter("address", "_from", 1)]
            public string From { get; set; }

            [Parameter("address", "_to", 2)]
            public string To { get; set; }

            [Parameter("uint256", "_tokenId", 3)]
            public BigInteger TokenId { get; set; }
        }

        private async Task Logic(string privateKey, string toAddress, BigInteger tokenId, string contractAddress)
        {
            Account account = new Account(privateKey);

            var abi = new TransferFunction()
            {
                From = account.Address,
                To = toAddress,
                TokenId = tokenId,
            };

            EthereumUtil.LoginWeb3(privateKey);
            var handler = EthereumStatus.Instance._web3.Eth.GetContractTransactionHandler<TransferFunction>();

            try
            {
                var value = await handler.SendRequestAsync(contractAddress, abi);

                result = value.ToString();
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string privateKey, string toAddress, BigInteger tokenId, string contractAddress)
        {
            Init();
            await Logic(privateKey, toAddress, tokenId, contractAddress);

            return new Tuple<string, bool>(result, status);
        }
    }
}
