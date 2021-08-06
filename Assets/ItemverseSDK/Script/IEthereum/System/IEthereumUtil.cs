using System;

using Nethereum.Web3;
using Nethereum.Web3.Accounts;
using Nethereum.Hex.HexConvertors.Extensions;

namespace IEthereumAPI
{
    public class IEthereumUtil
    {
        private static IEthereumUtil _instance = null;
        public static IEthereumUtil Instance
        {
            get
            {
                if (_instance == null) { _instance = new IEthereumUtil(); }
                return _instance;
            }
        }

        public Account NewAccount()
        {
            var key = Nethereum.Signer.EthECKey.GenerateKey();
            var privateKey = key.GetPrivateKeyAsBytes().ToHex();
            var account = new Account(privateKey);

            return account;
        }

        public void SetNetwork(IEthereumStatus.NetType netType)
        {
            IEthereumStatus.Instance.netType = netType;

            switch (netType)
            {
                case IEthereumStatus.NetType.main:
                    IEthereumStatus.Instance._infuraUrl = IEthereumStatus.Instance.mainInfuraUrl;
                    IEthereumStatus.Instance._chainId = IEthereumStatus.Instance.mainnetChainId;
                    break;
                case IEthereumStatus.NetType.ropsten:
                    IEthereumStatus.Instance._infuraUrl = IEthereumStatus.Instance.ropstenInfuraUrl;
                    IEthereumStatus.Instance._chainId = IEthereumStatus.Instance.ropstenChainId;
                    break;
                case IEthereumStatus.NetType.etc:
                    IEthereumStatus.Instance._infuraUrl = IEthereumStatus.Instance.etcInfuraUrl;
                    IEthereumStatus.Instance._chainId = IEthereumStatus.Instance.etcChainId;
                    break;
            }

            IEthereumStatus.Instance._web3 = new Web3(IEthereumStatus.Instance._infuraUrl);
        }

        public void LoginWeb3(string privateKey)
        {
            Account account = new Account(privateKey);
            IEthereumStatus.Instance._web3 = new Web3(account, IEthereumStatus.Instance._infuraUrl);
        }

        public void CheckPrivateKey(string privateKey)
        {
            try
            {
                // check privateKey length
                if (privateKey.Length != 64) throw new Exception("invalid privateKey length. must be privateKey length 64");
            }
            catch (Exception e)
            {
                throw e;
            }
        }

        public void CheckAddress(string address)
        {
            try
            {
                // check address length
                if (address.Length != 42) throw new Exception("invalid address length. must be address length 42");
                // check address 0x
                if (address.Substring(0, 2) != "0x") throw new Exception("address does not started with 0x");
            } catch(Exception e)
            {
                throw e;
            }
        }

        public void CheckTransactionHash(string transactionHash)
        {
            try
            {
                // check transactionHash length
                if (transactionHash.Length != 66) throw new Exception("invalid transactionHash length. must be address length 66");
                // check transactionHash 0x
                if (transactionHash.Substring(0, 2) != "0x") throw new Exception("transactionHash does not started with 0x");
            }
            catch (Exception e)
            {
                throw e;
            }
        }
    }
}