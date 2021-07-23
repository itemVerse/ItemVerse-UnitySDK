using System;
using System.Text;
using System.Security.Cryptography;

using Chaos.NaCl;

public static class SASEULEnc
{
    public static string THash(string target)
    {
        target = target.Replace("/", "\\/");
        target = StringToUnicode(target);
        return Sha256(target);
    }

    public static string StringToUnicode(string str)
    {
        StringBuilder sb = new StringBuilder();
        foreach (char c in str)
        {
            if (c > 127)
            {
                string encodedValue = "\\u" + ((int)c).ToString("x4");
                sb.Append(encodedValue);
            }
            else
            {
                sb.Append(c);
            }
        }
        return sb.ToString();
    }

    public static string MakePrivateKey()
    {
        byte[] signingKey = new byte[32];
        RNGCryptoServiceProvider.Create().GetBytes(signingKey);

        return ByteToHex(signingKey);
    }

    public static string MakePublicKey(string prk)
    {
        byte[] publicKey = Ed25519.PublicKeyFromSeed(HexToByte(prk));
        return ByteToHex(publicKey);
    }

    public static string MakeAddress(string puk)
    {
        string p0 = "0x00";
        string p1 = "0x6f";
        string address, s0, s1, s2;

        s0 = Ripemd160(Sha256(p0 + puk));
        s1 = p1 + s0;
        s2 = Sha256(Sha256(s1));

        address = s1 + s2.Substring(0, 4);

        return address;
    }

    public static string MakeSignature(string target, string prk)
    {
        byte[] expendedPrivatekey = Ed25519.ExpandedPrivateKeyFromSeed(HexToByte(prk));
        byte[] signature = Ed25519.Sign(Encoding.Default.GetBytes(target), expendedPrivatekey);
        return ByteToHex(signature);
    }

    public static string Ripemd160(string target)
    {
        RIPEMD160Managed crypt = new RIPEMD160Managed();

        return ByteToHex((crypt.ComputeHash(Encoding.Default.GetBytes(target))));
    }

    public static string Sha256(string target)
    {
        SHA256Managed crypt = new SHA256Managed();

        return ByteToHex((crypt.ComputeHash(Encoding.Default.GetBytes(target))));
    }

    public static string ByteToHex(byte[] target)
    {
        string result = String.Empty;

        foreach (byte theByte in target)
        {
            result += theByte.ToString("x2");
        }

        return result;
    }

    public static byte[] HexToByte(string hex)
    {
        if (hex.Length % 2 == 1)
            throw new Exception("The binary key cannot have an odd number of digits");

        byte[] arr = new byte[hex.Length >> 1];

        for (int i = 0; i < hex.Length >> 1; ++i)
        {
            arr[i] = (byte)((GetHexVal(hex[i << 1]) << 4) + (GetHexVal(hex[(i << 1) + 1])));
        }

        return arr;
    }

    public static int GetHexVal(char hex)
    {
        int val = (int)hex;
        return val - (val < 58 ? 48 : 87);
    }
}
