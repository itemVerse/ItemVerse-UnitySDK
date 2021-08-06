using System;
using System.Threading.Tasks;

using Nethereum.ABI.FunctionEncoding.Attributes;
using Nethereum.Contracts;

namespace IEthereumAPI
{
    public class ERC20_Name : IEthereumApi
    {
        private static ERC20_Name _instance = null;
        public static ERC20_Name Instance
        {
            get
            {
                if (_instance == null) { _instance = new ERC20_Name(); }
                return _instance;
            }
        }

        [Function("name", "string")]
        public class NameFunction : FunctionMessage { }

        private async Task Logic(string contractAddress)
        {
            try
            {
                // check contract address
                IEthereumUtil.Instance.CheckAddress(contractAddress);

                var abi = new NameFunction() { };

                var handler = IEthereumStatus.Instance._web3.Eth.GetContractQueryHandler<NameFunction>();

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
