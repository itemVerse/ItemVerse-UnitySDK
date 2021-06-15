using System;
using System.Threading.Tasks;

namespace IEthereumAPI
{
    public class Transfer : IEthereumApi
    {
        private static Transfer _instance = null;
        public static Transfer Instance
        {
            get
            {
                if (_instance == null) { _instance = new Transfer(); }
                return _instance;
            }
        }

        private async Task Logic(string privateKey, string toAddress, decimal amount)
        {
            try
            {
                IEthereumUtil.Instance.LoginWeb3(privateKey);

                var value = await IEthereumStatus.Instance._web3.Eth.GetEtherTransferService().TransferEtherAsync(toAddress, amount);

                result = value.ToString();
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string privateKey, string toAddress, decimal amount)
        {
            Init();
            await Logic(privateKey, toAddress, amount);

            return new Tuple<string, bool>(result, status);
        }
    }
}
