using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SASEULTransaction
{
    private string transaction;
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

    public WWWForm CreateNFT(string @class, string name, string thumbnail, string metadata)
    {
        SASEULTransactionCreateNFT t = new SASEULTransactionCreateNFT();
        WWWForm f = new WWWForm();

        t.type = "CreateNFT";
        t.from = from;
        t.@class = @class;
        t.name = name;
        t.thumbnail = thumbnail;
        t.metadata = metadata;
        t.timestamp = DateTimeOffset.Now.ToUnixTimeMilliseconds() * 1000;

        transaction = JsonUtility.ToJson(t);
        thash = SASEULEnc.THash(transaction);
        signature = SASEULEnc.MakeSignature(thash, private_key, public_key);

        f.AddField("transaction", transaction);
        f.AddField("thash", thash);
        f.AddField("public_key", public_key);
        f.AddField("signature", signature);

        return f;
    }
}

[Serializable]
public class SASEULTransactionCreateNFT
{
    public string type;
    public string from;
    public string @class;
    public string name;
    public string thumbnail;
    public string metadata;
    public long timestamp;
}