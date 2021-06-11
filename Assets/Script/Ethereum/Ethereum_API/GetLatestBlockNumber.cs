using System;
using System.Collections;
using System.Threading.Tasks;

using UnityEngine;

using Nethereum.JsonRpc.UnityClient;
using Nethereum.RPC.Eth.DTOs;

namespace EthereumAPI
{
    public class GetLatestBlockNumber : EthereumApi
    {
        private async Task Logic()
        {
            try
            {
                var value = await EthereumStatus.Instance._web3.Eth.Blocks.GetBlockNumber.SendRequestAsync();

                result = value.ToString();
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public void Call(Action callback)
        {
            Logic().ContinueWith(task =>
            {
                callback();
            });
        }
        public void Call(Action<string, bool> callback)
        {
            Logic().ContinueWith(task =>
            {
                callback(result, status);
            });
        }
    }
}
