using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;

using UnityEngine;

using Nethereum.JsonRpc.UnityClient;
using Nethereum.RPC.Eth.DTOs;
using Nethereum.Util;
using Nethereum.Web3.Accounts;
using Newtonsoft.Json;

namespace EthereumAPI
{
    public class SendRawTransaction : EthereumApi
    {
        private async Task Logic(string signedTrasnaction)
        {
            try
            {
                var value = await EthereumStatus.Instance._web3.Eth.Transactions.SendRawTransaction.SendRequestAsync(signedTrasnaction);

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
