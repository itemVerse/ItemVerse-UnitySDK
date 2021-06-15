using System;
using System.Numerics;
using System.Threading.Tasks;

using Nethereum.Web3;
using Nethereum.ABI.FunctionEncoding.Attributes;
using Nethereum.Util;
using Nethereum.Contracts;

namespace IEthereumAPI
{
    public class ERC20_GetBalance : IEthereumApi
    {
        private static ERC20_GetBalance _instance = null;
        public static ERC20_GetBalance Instance
        {
            get
            {
                if (_instance == null) { _instance = new ERC20_GetBalance(); }
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
            var abi = new BalanceOfFunction()
            {
                Owner = address,
            };

            var handler = IEthereumStatus.Instance._web3.Eth.GetContractQueryHandler<BalanceOfFunction>();

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

        public async Task<Tuple<string, bool>> Call(string address, string contractAddress)
        {
            Init();
            await Logic(address, contractAddress);

            return new Tuple<string, bool>(result, status);
        }
    }
}
