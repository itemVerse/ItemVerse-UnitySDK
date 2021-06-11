using System;
using System.Collections;
using System.Threading.Tasks;

using UnityEngine;

using Nethereum.JsonRpc.UnityClient;
using Nethereum.RPC.Eth.DTOs;
using Newtonsoft.Json;

namespace EthereumAPI
{
    public class GetTransactionByHash : EthereumApi
    {
        private async Task Logic(string transactionHash)
        {
            try
            {
                var value = await EthereumStatus.Instance._web3.Eth.Transactions.GetTransactionByHash.SendRequestAsync(transactionHash);

                result = JsonConvert.SerializeObject(value);
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public void Call(string transactionHash, Action callback)
        {
            Logic(transactionHash).ContinueWith(task =>
            {
                callback();
            });
        }
        public void Call(string transactionHash, Action<string, bool> callback)
        {
            Logic(transactionHash).ContinueWith(task =>
            {
                callback(result, status);
            });
        }
    }
}
