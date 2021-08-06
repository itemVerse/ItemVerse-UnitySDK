using System;
using System.Threading.Tasks;

namespace SASEULAPI
{
    public class SendRawTransaction : SaseulApi
    {
        private static SendRawTransaction _instance = null;
        public static SendRawTransaction Instance
        {
            get
            {
                if (_instance == null) { _instance = new SendRawTransaction(); }
                return _instance;
            }
        }

        private async Task Logic(string transaction, string thash, string publicKey, string signature)
        {
            try
            {
                // check publicKey
                SaseulUtil.Instance.CheckPublickey(publicKey);
                // check enter value
                SaseulUtil.Instance.CheckEnterValue(transaction);
                SaseulUtil.Instance.CheckEnterValue(thash);
                SaseulUtil.Instance.CheckEnterValue(signature);

                // Process
                form.AddField("transaction", transaction);
                form.AddField("thash", thash);
                form.AddField("public_key", publicKey);
                form.AddField("signature", signature);

                // Return
                result = await Send("/sendtransaction");
                status = true;
            } catch(Exception e)
            {
                result = e.Message.ToString();
                status = false;
            }
        }

        public async Task<Tuple<string, bool>> Call(string transaction, string thash, string publicKey, string signature)
        {
            Init();
            await Logic(transaction, thash, publicKey, signature);

            return new Tuple<string, bool>(result, status);
        }
    }
}