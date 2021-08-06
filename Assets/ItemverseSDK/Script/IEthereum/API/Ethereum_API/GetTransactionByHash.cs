using System;
using System.Threading.Tasks;

using Newtonsoft.Json;

namespace IEthereumAPI
{
    public class GetTransactionByHash : IEthereumApi
    {
        private static GetTransactionByHash _instance = null;
        public static GetTransactionByHash Instance
        {
            get
            {
                if (_instance == null) { _instance = new GetTransactionByHash(); }
                return _instance;
            }
        }

        private async Task Logic(string transactionHash)
        {
            try
            {
                // check transactionHash
                IEthereumUtil.Instance.CheckTransactionHash(transactionHash);

                var value = await IEthereumStatus.Instance._web3.Eth.Transactions.GetTransactionByHash.SendRequestAsync(transactionHash);

                result = JsonConvert.SerializeObject(value);
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string transactionHash)
        {
            Init();
            await Logic(transactionHash);

            return new Tuple<string, bool>(result, status);
        }
    }
}
