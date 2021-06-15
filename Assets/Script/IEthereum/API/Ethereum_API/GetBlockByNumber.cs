using System;
using System.Threading.Tasks;

using Nethereum.Hex.HexTypes;
using Newtonsoft.Json;

namespace IEthereumAPI
{
    public class GetBlockByNumber : IEthereumApi
    {
        private static GetBlockByNumber _instance = null;
        public static GetBlockByNumber Instance
        {
            get
            {
                if (_instance == null) { _instance = new GetBlockByNumber(); }
                return _instance;
            }
        }

        private async Task Logic(HexBigInteger blockNumber)
        {
            try
            {
                var value = await IEthereumStatus.Instance._web3.Eth.Blocks.GetBlockWithTransactionsByNumber.SendRequestAsync(blockNumber);

                result = JsonConvert.SerializeObject(value);
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(HexBigInteger blockNumber)
        {
            Init();
            await Logic(blockNumber);

            return new Tuple<string, bool>(result, status);
        }
    }
}
