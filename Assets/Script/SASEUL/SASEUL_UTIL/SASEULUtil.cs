using UnityEngine;
using System.Collections;
using System.Numerics;

public static class SaseulUtil
{
    public static void SetNetwork(string nettype)
    {
        SaseulStatus.Instance.netType = nettype;

        switch (SaseulStatus.Instance.netType)
        {
            case "aria":
                SaseulStatus.Instance._url = SaseulStatus.Instance.ariaUrl;
                break;
            case "etc":
                SaseulStatus.Instance._url = SaseulStatus.Instance.etcUrl;
                break;
        }
    }
}
