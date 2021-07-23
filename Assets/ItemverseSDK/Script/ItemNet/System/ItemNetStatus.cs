using System;

using UnityEngine;

public class ItemNetStatus : MonoBehaviour
{
    public static ItemNetStatus Instance;

    private void Awake()
    {
        Instance = gameObject.GetComponent<ItemNetStatus>();

        SaseulUtil.Instance.SetNetwork(ItemNetStatus.Instance.netType);
    }

    public string netType = "main"; // main, etc

    public string mainUrl = "https://aria.itemverse.io";
    public string etcUrl = "https://bolero.itemverse.io";

    public string version = "1.2.2.13";

    [NonSerialized] public string _url;
}
