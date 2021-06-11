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

        public Task Run(string address)
        {
            return Logic(address);
        }
        
        public void Call(string address)
        {
            Logic(address);
        }
        public void Call(string address, Action callback)
        {
            Logic(address).ContinueWith(task => { callback(); });
        }
        public void Call(string address, Action<string> callback)
        {
            Logic(address).ContinueWith(task =>{ callback(result); });
        }
        public void Call(string address, Action<bool> callback)
        {
            Logic(address).ContinueWith(task => { callback(status); });
        }
        public void Call(string address, Action<string, bool> callback)
        {
            Logic(address).ContinueWith(task => { callback(result, status); });
        }
    }
}
