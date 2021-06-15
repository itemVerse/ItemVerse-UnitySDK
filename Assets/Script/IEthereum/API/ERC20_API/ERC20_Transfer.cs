using System;
using System.Numerics;
using System.Threading.Tasks;

using Nethereum.Web3;
using Nethereum.ABI.FunctionEncoding.Attributes;
using Nethereum.Web3.Accounts;
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
            IEthereumUtil.Instance.LoginWeb3(privateKey);

            var abi = new TransferFunction()
            {
                From = account.Address,
                To = toAddress,
                TokenAmount = Web3.Convert.ToWei(tokenAmount),
            };

            var handler = IEthereumStatus.Instance._web3.Eth.GetContractTransactionHandler<TransferFunction>();

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

        public async Task<Tuple<string, bool>> Call(string privateKey, string toAddress, BigInteger tokenAmount, string contractAddress)
        {
            Init();
            await Logic(privateKey, toAddress, tokenAmount, contractAddress);

            return new Tuple<string, bool>(result, status);
        }
    }
}
