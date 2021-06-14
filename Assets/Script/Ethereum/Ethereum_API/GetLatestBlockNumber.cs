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

        public async Task<Tuple<string, bool>> Call()
        {
            Init();
            await Logic();

            return new Tuple<string, bool>(result, status);
        }
    }
}
