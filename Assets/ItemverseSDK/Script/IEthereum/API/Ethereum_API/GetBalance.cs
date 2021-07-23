using System;
using System.Threading.Tasks;

using Nethereum.Web3;
using Nethereum.Util;

namespace IEthereumAPI
{
    public class GetBalance : IEthereumApi
    {
        private static GetBalance _instance = null;
        public static GetBalance Instance
        {
            get
            {
                if (_instance == null){ _instance = new GetBalance(); }
                return _instance;
            }
        }

        private async Task Logic(string address)
        {
            try
            {
                var value = await IEthereumStatus.Instance._web3.Eth.GetBalance.SendRequestAsync(address);

                result = Web3.Convert.FromWei(value, UnitConversion.EthUnit.Ether).ToString();
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string address)
        {
            Init();
            await Logic(address);

            return new Tuple<string, bool>(result, status);
        }
    }
}
