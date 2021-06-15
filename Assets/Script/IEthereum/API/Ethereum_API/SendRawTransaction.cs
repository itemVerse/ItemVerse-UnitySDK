using System;
using System.Threading.Tasks;

namespace IEthereumAPI
{
    public class SendRawTransaction : IEthereumApi
    {
        private static SendRawTransaction _instance = null;
        public static SendRawTransaction Instance
        {
            get
            {
                if (_instance == null) { _instance = new SendRawTransaction(); }
                return _instance;
            }
        }

        private async Task Logic(string signedTrasnaction)
        {
            try
            {
                var value = await IEthereumStatus.Instance._web3.Eth.Transactions.SendRawTransaction.SendRequestAsync(signedTrasnaction);

                result = value.ToString();
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string signedTrasnaction)
        {
            Init();
            await Logic(signedTrasnaction);

            return new Tuple<string, bool>(result, status);
        }
    }
}
