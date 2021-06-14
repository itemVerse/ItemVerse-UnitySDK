using System;
using System.Collections;
using System.Threading.Tasks;

using UnityEngine;

using Nethereum.Web3;
using Nethereum.Util;
using Nethereum.JsonRpc.UnityClient;
using Nethereum.RPC.Eth.DTOs;

namespace EthereumAPI
{
    public class GetBalance : EthereumApi
    {
        private async Task Logic(string address)
        {
            try
            {
                var value = await EthereumStatus.Instance._web3.Eth.GetBalance.SendRequestAsync(address);

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
