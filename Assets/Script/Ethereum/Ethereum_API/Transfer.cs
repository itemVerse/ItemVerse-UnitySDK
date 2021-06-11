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
    public class Transfer : EthereumApi
    {
        private async Task Logic(string privateKey, string toAddress, decimal amount)
        {
            try
            {
                EthereumUtil.LoginWeb3(privateKey);

                var value = await EthereumStatus.Instance._web3.Eth.GetEtherTransferService().TransferEtherAsync(toAddress, amount);

                result = value.ToString();
                status = true;
            }
            catch (Exception e)
            {
                Debug.Log(JsonConvert.SerializeObject(e));
                result = e.Message.ToString();
                status = false;
            }
        }

        public void Call(string privateKey, string toAddress, decimal amount, Action callback)
        {
            Logic(privateKey, toAddress, amount).ContinueWith(task =>
            {
                callback();
            });
        }
        public void Call(string privateKey, string toAddress, decimal amount, Action<string, bool> callback)
        {
            Logic(privateKey, toAddress, amount).ContinueWith(task =>
            {
                callback(result, status);
            });
        }
    }
}
