using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using UnityEngine;
using UnityEditor;

public class SaseulStatus : MonoBehaviour
{
    private SaseulStatus() {}
    private static SaseulStatus _instance = null;
    public static SaseulStatus Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.Find("SaseulStatus").GetComponent<SaseulStatus>();
            }

            return _instance;
        }
    }

    private void Awake()
    {
        SaseulUtil.SetNetwork(SaseulStatus.Instance.netType);
    }

    public string netType = "aria";

    public string ariaUrl = "https://aria.itemverse.io";
    public string etcUrl = "https://aria.itemverse.io";

    public string version = "1.2.2.13";

    [NonSerialized] public string _url;
}
