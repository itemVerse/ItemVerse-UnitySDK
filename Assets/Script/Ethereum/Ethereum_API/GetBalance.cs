using System;
using System.Collections;
using System.Threading.Tasks;

using UnityEngine;

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

                result = value.ToString();
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public void Call(string address, Action callback)
        {
            Logic(address).ContinueWith(task =>
            {
                callback();
            });
        }
        public void Call(string address, Action<string, bool> callback)
        {
            Logic(address).ContinueWith(task =>
            {
                callback(result, status);
            });
        }
    }
}
