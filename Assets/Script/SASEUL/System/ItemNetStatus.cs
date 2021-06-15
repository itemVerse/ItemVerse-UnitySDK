using System;

using UnityEngine;

public class ItemNetStatus : MonoBehaviour
{
    private static ItemNetStatus _instance = null;
    public static ItemNetStatus Instance
    {
        get
        {
            if (_instance == null)
            {
                
                _instance = GameObject.Find("ItemNetStatus").GetComponent<ItemNetStatus>();
            }

            return _instance;
        }
    }

    private void Awake()
    {
        SaseulUtil.Instance.SetNetwork(ItemNetStatus.Instance.netType);
    }

    public string netType = "aria";

    public string ariaUrl = "https://aria.itemverse.io";
    public string etcUrl = "https://aria.itemverse.io";

    public string version = "1.2.2.13";

    [NonSerialized] public string _url;
}
