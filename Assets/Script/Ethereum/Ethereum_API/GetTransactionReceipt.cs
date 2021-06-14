using System;
using System.Collections;
using System.Threading.Tasks;

using UnityEngine;

using Nethereum.JsonRpc.UnityClient;
using Nethereum.RPC.Eth.DTOs;
using Newtonsoft.Json;

namespace EthereumAPI
{
    public class GetTransactionReceipt : EthereumApi
    {
        private async Task Logic(string transactionHash)
        {
            try
            {
                var value = await EthereumStatus.Instance._web3.Eth.Transactions.GetTransactionReceipt.SendRequestAsync(transactionHash);

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
