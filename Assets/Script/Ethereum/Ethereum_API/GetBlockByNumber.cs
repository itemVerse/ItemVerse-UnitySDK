using System;
using System.Collections;
using System.Threading.Tasks;

using UnityEngine;

using Nethereum.JsonRpc.UnityClient;
using Nethereum.Hex.HexTypes;
using Nethereum.RPC.Eth.DTOs;
using Newtonsoft.Json;

namespace EthereumAPI
{
    public class GetBlockByNumber : EthereumApi
    {
        private async Task Logic(HexBigInteger blockNumber)
        {
            try
            {
                var value = await EthereumStatus.Instance._web3.Eth.Blocks.GetBlockWithTransactionsByNumber.SendRequestAsync(blockNumber);

                result = JsonConvert.SerializeObject(value);
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(HexBigInteger blockNumber)
        {
            Init();
            await Logic(blockNumber);

            return new Tuple<string, bool>(result, status);
        }
    }
}
