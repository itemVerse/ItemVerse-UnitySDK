using UnityEngine;
using UnityEngine.UI;

public class Change : MonoBehaviour
{
    public string type = "itemnet";

    public GameObject ItemNetCallButton;
    public GameObject IEthereumCallButton;
    public Text changeButtonText;

    public void Start()
    {
        ChangeType();
    }

    public void ChangeType()
    {
        switch (type)
        {
            case "itemnet":
                type = "iethereum";
                ItemNetChange();
                break;
            case "iethereum":
                type = "itemnet";
                IEthereumChange();
                break;
        }
    }

    void ItemNetChange()
    {
        changeButtonText.text = "IEthereum Change";
        ItemNetCallButton.SetActive(true);
        IEthereumCallButton.SetActive(false);
    }

    void IEthereumChange()
    {
        changeButtonText.text = "ItemNet Change";
        ItemNetCallButton.SetActive(false);
        IEthereumCallButton.SetActive(true);
    }
}
