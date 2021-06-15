using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;

using UnityEngine;

using Nethereum.Hex.HexTypes;

public class IEthereumExample : MonoBehaviour
{
    IEthereum.IEthereum ieth = new IEthereum.IEthereum();

    BigInteger blockNumber = 100000;
    string privateKey = "74945e566f482e022cbd0afba6b4c2ae15781f3551b0966e626c16fe432ec45e";
    string address = "0xB666D5dEd9510C913a0703dDa2D4803a31f56B40";
    string toAddress = "0x287DB8145a10990fF6320A85fbFeCA7A44C3D562";
    decimal amount = 0.1m;
    BigInteger tokenAmount = 1;
    string transactionHash = "0x96a1e4d67ae2ff8b701606f91d43836391d7d52351d55a2eb5a0fc7d8f1df104";
    string contractAddress = "0xFab46E002BbF0b4509813474841E0716E6730136";
    string erc721ContractAddress = "0x2bc6a941a082a1e1057883e91ab9bc7b7515d745";

    void Start()
    {
        Example_ERC20_GetBalance();
    }


    void Example_GetBalance()
    {
        ieth.GetBalance.Call(address).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_GetBlockByNumber()
    {
        HexBigInteger bigInteger = new HexBigInteger(blockNumber);

        ieth.GetBlockByNumber.Call(bigInteger).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_GetLatestBlockNumber()
    {
        ieth.GetLatestBlockNumber.Call().ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_GetTransactionByHash()
    {
        ieth.GetTransactionByHash.Call(transactionHash).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_GetTransactionReceipt()
    {
        ieth.GetTransactionReceipt.Call(transactionHash).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_Transfer()
    {
        ieth.Transfer.Call(privateKey, toAddress, amount).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }



    void Example_ERC20_GetBalance()
    {
        ieth.ERC20_GetBalance.Call(address, contractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_ERC20_Transfer()
    {
        ieth.ERC20_Transfer.Call(privateKey, toAddress, tokenAmount, contractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_ERC20_Name()
    {
        ieth.ERC20_Name.Call(contractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_ERC20_Symbol()
    {
        ieth.ERC20_Symbol.Call(contractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_ERC20_TotalSupply()
    {
        ieth.ERC20_TotalSupply.Call(contractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }



    void Example_ERC721_GetBalance()
    {
        ieth.ERC721_GetBalance.Call("0x4b32da1b12001bc358b6f901294cdf4b13fe37f1", erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_ERC721_TokenOfOwnerByIndex()
    {
        ieth.ERC721_TokenOfOwnerByIndex.Call("0x4b32da1b12001bc358b6f901294cdf4b13fe37f1", 0, erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_ERC721_Name()
    {
        ieth.ERC721_Name.Call(erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_ERC721_Symbol()
    {
        ieth.ERC721_Symbol.Call(erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_ERC721_TotalSupply()
    {
        ieth.ERC721_TotalSupply.Call(erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_ERC721_OwnerOf()
    {
        ieth.ERC721_OwnerOf.Call(21, erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_ERC721_TokenURI()
    {
        ieth.ERC721_TokenURI.Call(21, erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }

    void Example_ERC721_Transfer()
    {
        ieth.ERC721_Transfer.Call(privateKey, toAddress, 21, erc721ContractAddress).ContinueWith(task =>
        {
            Debug.Log(task.Result.Item1);
            Debug.Log(task.Result.Item2);
        });
    }
}
