using UnityEngine;
using System.Collections;
using System.Numerics;

public class SaseulUtil
{
    private static SaseulUtil _instance = null;
    public static SaseulUtil Instance
    {
        get
        {
            if (_instance == null) { _instance = new SaseulUtil(); }
            return _instance;
        }
    }

    public void SetNetwork(string nettype)
    {
        ItemNetStatus.Instance.netType = nettype;

        switch (ItemNetStatus.Instance.netType)
        {
            case "aria":
                ItemNetStatus.Instance._url = ItemNetStatus.Instance.ariaUrl;
                break;
            case "etc":
                ItemNetStatus.Instance._url = ItemNetStatus.Instance.etcUrl;
                break;
        }
    }
}
