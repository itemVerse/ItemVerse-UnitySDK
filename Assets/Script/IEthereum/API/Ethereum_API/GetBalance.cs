using System;
using System.Threading.Tasks;
using System.Net;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;

using Nethereum.Web3;
using Nethereum.Util;

namespace IEthereumAPI
{
    public class GetBalance : IEthereumApi
    {
        private static GetBalance _instance = null;
        public static GetBalance Instance
        {
            get
            {
                if (_instance == null){ _instance = new GetBalance(); }
                return _instance;
            }
        }

        public bool TrustCertificate(object sender, X509Certificate x509Certificate, X509Chain x509Chain, SslPolicyErrors sslPolicyErrors)
        {
            return true;
        }
        private async Task Logic(string address)
        {
            try
            {

                System.Net.ServicePointManager.SecurityProtocol |= SecurityProtocolType.Tls12;
                System.Net.ServicePointManager.ServerCertificateValidationCallback = TrustCertificate;

                var value = await IEthereumStatus.Instance._web3.Eth.GetBalance.SendRequestAsync(address);

                result = Web3.Convert.FromWei(value, UnitConversion.EthUnit.Ether).ToString();
                status = true;
            }
            catch (Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string address)
        {
            Init();
            await Logic(address);

            return new Tuple<string, bool>(result, status);
        }
    }
}
