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

using Newtonsoft.Json;

namespace EthereumAPI
{
    public class ERC20_Transfer : EthereumApi
    {
        [Function("Transfer", "bool")]
        public class TransferFunction : FunctionMessage
        {
            [Parameter("address", "_from", 1)]
            public string From { get; set; }

            [Parameter("address", "_to", 2)]
            public string To { get; set; }

            [Parameter("uint256", "_value", 3)]
            public BigInteger TokenAmount { get; set; }
        }

        private async Task Logic(string privateKey, string toAddress, BigInteger tokenAmount, string contractAddress)
        {
            Account account = new Account(privateKey);
            EthereumUtil.LoginWeb3(privateKey);

            var abi = new TransferFunction()
            {
                From = account.Address,
                To = toAddress,
                TokenAmount = Web3.Convert.ToWei(tokenAmount),
            };

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

        public void Call(string privateKey, string toAddress, BigInteger tokenAmount, string contractAddress, Action callback)
        {
            Logic(privateKey, toAddress, tokenAmount, contractAddress).ContinueWith(task =>
            {
                callback();
            });
        }
        public void Call(string privateKey, string toAddress, BigInteger tokenAmount, string contractAddress, Action<string, bool> callback)
        {
            Logic(privateKey, toAddress, tokenAmount, contractAddress).ContinueWith(task =>
            {
                callback(result, status);
            });
        }
    }
}
