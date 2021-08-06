using System;
using System.Numerics;
using System.Threading.Tasks;

using Nethereum.Web3;
using Nethereum.ABI.FunctionEncoding.Attributes;
using Nethereum.Contracts;

namespace IEthereumAPI
{
    public class ERC20_Transfer : IEthereumApi
    {
        private static ERC20_Transfer _instance = null;
        public static ERC20_Transfer Instance
        {
            get
            {
                if (_instance == null) { _instance = new ERC20_Transfer(); }
                return _instance;
            }
        }

        [Function("transfer", "bool")]
        public class TransferFunction : FunctionMessage
        {
            [Parameter("address", "_to", 1)]
            public string To { get; set; }

            [Parameter("uint256", "_value", 2)]
            public BigInteger TokenAmount { get; set; }
        }

        private async Task Logic(string privateKey, string toAddress, BigInteger tokenAmount, string contractAddress)
        {
            try
            {
                // check privateKey
                IEthereumUtil.Instance.CheckPrivateKey(privateKey);
                // check toAddress
                IEthereumUtil.Instance.CheckAddress(toAddress);
                // check contract address
                IEthereumUtil.Instance.CheckAddress(contractAddress);

                IEthereumUtil.Instance.LoginWeb3(privateKey);

                var abi = new TransferFunction()
                {
                    To = toAddress,
                    TokenAmount = Web3.Convert.ToWei(tokenAmount),
                };

                var handler = IEthereumStatus.Instance._web3.Eth.GetContractTransactionHandler<TransferFunction>();

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

        public async Task<Tuple<string, bool>> Call(string privateKey, string toAddress, BigInteger tokenAmount, string contractAddress)
        {
            Init();
            await Logic(privateKey, toAddress, tokenAmount, contractAddress);

            return new Tuple<string, bool>(result, status);
        }
    }
}
