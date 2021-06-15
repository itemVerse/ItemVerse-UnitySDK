using System;
using System.Threading.Tasks;

namespace IEthereumAPI
{
    public class GetLatestBlockNumber : IEthereumApi
    {
        private static GetLatestBlockNumber _instance = null;
        public static GetLatestBlockNumber Instance
        {
            get
            {
                if (_instance == null) { _instance = new GetLatestBlockNumber(); }
                return _instance;
            }
        }

        private async Task Logic()
        {
            try
            {
                var value = await IEthereumStatus.Instance._web3.Eth.Blocks.GetBlockNumber.SendRequestAsync();

                result = value.ToString();
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call()
        {
            Init();
            await Logic();

            return new Tuple<string, bool>(result, status);
        }
    }
}
