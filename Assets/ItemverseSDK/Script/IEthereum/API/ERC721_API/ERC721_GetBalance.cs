using System;
using System.Numerics;
using System.Threading.Tasks;

using Nethereum.ABI.FunctionEncoding.Attributes;
using Nethereum.Contracts;

namespace IEthereumAPI
{
    public class ERC721_GetBalance : IEthereumApi
    {
        private static ERC721_GetBalance _instance = null;
        public static ERC721_GetBalance Instance
        {
            get
            {
                if (_instance == null) { _instance = new ERC721_GetBalance(); }
                return _instance;
            }
        }

        [Function("balanceOf", "uint256")]
        public class BalanceOfFunction : FunctionMessage
        {
            [Parameter("address", "_owner", 1)]
            public string Owner { get; set; }
        }

        private async Task Logic(string address, string contractAddress)
        {
            try
            {
                // check address
                IEthereumUtil.Instance.CheckAddress(address);
                // check contract address
                IEthereumUtil.Instance.CheckAddress(contractAddress);

                var abi = new BalanceOfFunction()
                {
                    Owner = address,
                };

                var handler = IEthereumStatus.Instance._web3.Eth.GetContractQueryHandler<BalanceOfFunction>();

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

        public async Task<Tuple<string, bool>> Call(string address, string contractAddress)
        {
            Init();
            await Logic(address, contractAddress);

            return new Tuple<string, bool>(result, status);
        }
    }
}
