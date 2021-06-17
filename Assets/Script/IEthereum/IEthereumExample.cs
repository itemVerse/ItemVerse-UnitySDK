using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;

using UnityEngine;
using UnityEngine.UI;
using UnityEditor;

using Itemverse;
using Nethereum.Hex.HexTypes;

public class IEthereumExample : MonoBehaviour
{
    private IEthereum ieth;

    public string privateKey = "74945e566f482e022cbd0afba6b4c2ae15781f3551b0966e626c16fe432ec45e";
    public string address = "0xB666D5dEd9510C913a0703dDa2D4803a31f56B40";
    public string toAddress = "0x287DB8145a10990fF6320A85fbFeCA7A44C3D562";

    public decimal ethAmount = 0.1m;
    public int tokenAmount = 1;
    public int erc721TokenID = 21;
    public int erc721TokenIndex = 0;

    public int blockNumber = 100000;
    public string transactionHash = "0x96a1e4d67ae2ff8b701606f91d43836391d7d52351d55a2eb5a0fc7d8f1df104";
    public string erc20ContractAddress = "0xFab46E002BbF0b4509813474841E0716E6730136";
    public string erc721ContractAddress = "0x2bc6a941a082a1e1057883e91ab9bc7b7515d745";

    public Text logText;
    public string log = "";

    void Start()
    {
        IEthereumUtil.Instance.SetNetwork(IEthereumStatus.Instance.netType);

        ieth = new IEthereum();
    }

    private void Update()
    {
        logText.text = log;
    }

    public void Example_GetBalance()
    {
        Debug.Log("Loading...");
        ieth.GetBalance.Call(address).ContinueWith(task =>
        {
            log = task.Result.Item1;
            Debug.Log("Call: GetBalance");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_GetBlockByNumber()
    {
        Debug.Log("Loading...");
        ieth.GetBlockByNumber.Call(new HexBigInteger(blockNumber)).ContinueWith(task =>
        {
            Debug.Log("Call: GetBlockByNumber");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_GetLatestBlockNumber()
    {
        Debug.Log("Loading...");
        ieth.GetLatestBlockNumber.Call().ContinueWith(task =>
        {
            Debug.Log("Call: GetLatestBlockNumber");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_GetTransactionByHash()
    {
        Debug.Log("Loading...");
        ieth.GetTransactionByHash.Call(transactionHash).ContinueWith(task =>
        {
            Debug.Log("Call: GetTransactionByHash");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_GetTransactionReceipt()
    {
        Debug.Log("Loading...");
        ieth.GetTransactionReceipt.Call(transactionHash).ContinueWith(task =>
        {
            Debug.Log("Call: GetTransactionReceipt");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_Transfer()
    {
        Debug.Log("Loading...");
        ieth.Transfer.Call(privateKey, toAddress, ethAmount).ContinueWith(task =>
        {
            Debug.Log("Call: Transfer");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }



    public void Example_ERC20_GetBalance()
    {
        Debug.Log("Loading...");
        ieth.ERC20_GetBalance.Call(address, erc20ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC20_GetBalance");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_ERC20_Transfer()
    {
        Debug.Log("Loading...");
        ieth.ERC20_Transfer.Call(privateKey, toAddress, tokenAmount, erc20ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC20_Transfer");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_ERC20_Name()
    {
        Debug.Log("Loading...");
        ieth.ERC20_Name.Call(erc20ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC20_Name");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_ERC20_Symbol()
    {
        Debug.Log("Loading...");
        ieth.ERC20_Symbol.Call(erc20ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC20_Symbol");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_ERC20_TotalSupply()
    {
        Debug.Log("Loading...");
        ieth.ERC20_TotalSupply.Call(erc20ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC20_TotalSupply");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }


    public void Example_ERC721_GetBalance()
    {
        Debug.Log("Loading...");
        ieth.ERC721_GetBalance.Call(address, erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC721_GetBalance");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_ERC721_TokenOfOwnerByIndex()
    {
        Debug.Log("Loading...");
        ieth.ERC721_TokenOfOwnerByIndex.Call(address, erc721TokenIndex, erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC721_TokenOfOwnerByIndex");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_ERC721_Name()
    {
        Debug.Log("Loading...");
        ieth.ERC721_Name.Call(erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC721_Name");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_ERC721_Symbol()
    {
        Debug.Log("Loading...");
        ieth.ERC721_Symbol.Call(erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC721_Symbol");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_ERC721_TotalSupply()
    {
        Debug.Log("Loading...");
        ieth.ERC721_TotalSupply.Call(erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC721_TotalSupply");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_ERC721_OwnerOf()
    {
        Debug.Log("Loading...");
        ieth.ERC721_OwnerOf.Call(erc721TokenID, erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC721_OwnerOf");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_ERC721_TokenURI()
    {
        Debug.Log("Loading...");
        ieth.ERC721_TokenURI.Call(erc721TokenID, erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC721_TokenURI");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }

    public void Example_ERC721_Transfer()
    {
        Debug.Log("Loading...");
        ieth.ERC721_Transfer.Call(privateKey, toAddress, erc721TokenID, erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log("Call: ERC721_Transfer");
            Debug.Log("Data: " + task.Result.Item1);
            Debug.Log("Status: " + task.Result.Item2);
        });
    }
}
