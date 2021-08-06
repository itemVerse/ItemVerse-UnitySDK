using System;
using System.Numerics;
using System.Threading.Tasks;

using UnityEngine;

using Nethereum.ABI.FunctionEncoding.Attributes;
using Nethereum.Contracts;

namespace IEthereumAPI
{
    public class ERC721_TokenOfOwnerByIndex : IEthereumApi
    {
        private static ERC721_TokenOfOwnerByIndex _instance = null;
        public static ERC721_TokenOfOwnerByIndex Instance
        {
            get
            {
                if (_instance == null) { _instance = new ERC721_TokenOfOwnerByIndex(); }
                return _instance;
            }
        }

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
            try
            {
                // check address
                IEthereumUtil.Instance.CheckAddress(address);
                // check contract address
                IEthereumUtil.Instance.CheckAddress(contractAddress);

                var abi = new TokenOfOwnerByIndexFunction()
                {
                    Owner = address,
                    Index = index,
                };

                var handler = IEthereumStatus.Instance._web3.Eth.GetContractQueryHandler<TokenOfOwnerByIndexFunction>();

                var value = await handler.QueryAsync<object>(contractAddress, abi);

                result = value.ToString();
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string address, BigInteger index, string contractAddress)
        {
            Init();
            await Logic(address, index, contractAddress);

            return new Tuple<string, bool>(result, status);
        }
    }
}
