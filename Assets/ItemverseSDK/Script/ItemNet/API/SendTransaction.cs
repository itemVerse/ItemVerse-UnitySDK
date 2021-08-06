using System;
using System.Threading.Tasks;

namespace SASEULAPI
{
    public class SendTransaction : SaseulApi
    {
        private static SendTransaction _instance = null;
        public static SendTransaction Instance
        {
            get
            {
                if (_instance == null) { _instance = new SendTransaction(); }
                return _instance;
            }
        }

        private async Task Logic(string privateKey, string transactionData)
        {
            try
            {
                // check privateKey
                SaseulUtil.Instance.CheckPrivateKey(privateKey);
                // check enter value
                SaseulUtil.Instance.CheckEnterValue(transactionData);

                // Process
                await Task.Run(() =>
                {
                    string publicKey = SASEULEnc.MakePublicKey(privateKey);
                    string address = SASEULEnc.MakeAddress(publicKey);

                    string transaction = transactionData;
                    string thash = SASEULEnc.THash(transaction);
                    string signature = SASEULEnc.MakeSignature(thash, privateKey);

                    form.AddField("transaction", transaction);
                    form.AddField("thash", thash);
                    form.AddField("public_key", publicKey);
                    form.AddField("signature", signature);
                });

                // Return
                result = await Send("/sendtransaction");
                status = true;
            } catch(Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string privateKey, string transactionData)
        {
            Init();
            await Logic(privateKey, transactionData);

            return new Tuple<string, bool>(result, status);
        }
    }
}