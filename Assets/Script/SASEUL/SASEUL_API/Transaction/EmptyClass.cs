using System;
using UnityEngine;

public class Tran
{
    private WWWForm f;
    private string version = "0.5";

    private string request;
    private string thash;
    private string public_key;
    private string signature;

    private string private_key;
    private string from;

    public void SetKey(string prk, string puk, string addr)
    {
        private_key = prk;
        public_key = puk;
        from = addr;
    }

    public WWWForm GetAccountInfo(string transactional_data)
    {
        SASEULRequestGetAccountInfo r = new SASEULRequestGetAccountInfo();

        r.type = "GetAccountInfo";
        r.version = version;
        r.from = from;
        r.transactional_data = transactional_data;
        r.timestamp = DateTimeOffset.Now.ToUnixTimeMilliseconds();

        f = new WWWForm();

        request = JsonUtility.ToJson(r);
        thash = SASEULEnc.THash(request);
        signature = SASEULEnc.MakeSignature(thash, private_key, public_key);

        f.AddField("request", request);
        f.AddField("thash", thash);
        f.AddField("public_key", public_key);
        f.AddField("signature", signature);

        return f;
    }
}

[Serializable]
public class SASEULRequestGetAccountInfo
{
    public string type;
    public string version;
    public string from;
    public string transactional_data;
    public long timestamp;
}
