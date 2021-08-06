using System;
using System.Threading.Tasks;

using Nethereum.ABI.FunctionEncoding.Attributes;
using Nethereum.Contracts;

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
            try
            {
                // check contract address
                IEthereumUtil.Instance.CheckAddress(contractAddress);

                var abi = new SymbolFunction() { };

                var handler = IEthereumStatus.Instance._web3.Eth.GetContractQueryHandler<SymbolFunction>();

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
