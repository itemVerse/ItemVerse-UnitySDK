using System;
using System.Threading.Tasks;

using Nethereum.ABI.FunctionEncoding.Attributes;
using Nethereum.Contracts;

namespace IEthereumAPI
{
    public class ERC20_TotalSupply : IEthereumApi
    {
        private static ERC20_TotalSupply _instance = null;
        public static ERC20_TotalSupply Instance
        {
            get
            {
                if (_instance == null) { _instance = new ERC20_TotalSupply(); }
                return _instance;
            }
        }

        [Function("totalSupply", "uint256")]
        public class TotalSupplyFunction : FunctionMessage { }

        private async Task Logic(string contractAddress)
        {
            try
            {
                // check contract address
                IEthereumUtil.Instance.CheckAddress(contractAddress);

                var abi = new TotalSupplyFunction() { };

                var handler = IEthereumStatus.Instance._web3.Eth.GetContractQueryHandler<TotalSupplyFunction>();

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

        public async Task<Tuple<string, bool>> Call(string contractAddress)
        {
            Init();
            await Logic(contractAddress);

            return new Tuple<string, bool>(result, status);
        }
    }
}
