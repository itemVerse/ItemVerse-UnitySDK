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

namespace IEthereumAPI
{
    public class ERC721_Symbol : IEthereumApi
    {
        private static ERC721_Symbol _instance = null;
        public static ERC721_Symbol Instance
        {
            get
            {
                if (_instance == null) { _instance = new ERC721_Symbol(); }
                return _instance;
            }
        }

        [Function("symbol", "string")]
        public class SymbolFunction : FunctionMessage { }

        private async Task Logic(string contractAddress)
        {
            var abi = new SymbolFunction() { };

            var handler = IEthereumStatus.Instance._web3.Eth.GetContractQueryHandler<SymbolFunction>();

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

        public async Task<Tuple<string, bool>> Call(string contractAddress)
        {
            Init();
            await Logic(contractAddress);

            return new Tuple<string, bool>(result, status);
        }
    }
}
