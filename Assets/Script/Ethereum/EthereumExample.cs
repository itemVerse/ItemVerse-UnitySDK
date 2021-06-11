using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EthereumAPI;
using System.Numerics;
using Nethereum.Hex.HexTypes;

public class EthereumExample : MonoBehaviour
{
    CoroutineManager coroutineManager;

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
        coroutineManager = GameObject.Find("CoroutineManager").GetComponent<CoroutineManager>();

        Example_Transfer();
    }


    void Example_GetBalance()
    {
        var api = new GetBalance();
        int key = coroutineManager.MakeKey();

        api.Call(address, (string result, bool status) =>
        {
            Debug.Log(result);
        });
    }

    void Example_GetBlockByNumber()
    {
        var api = new GetBlockByNumber();
        int key = coroutineManager.MakeKey();
        HexBigInteger bigInteger = new HexBigInteger(blockNumber);

        api.Call(bigInteger, (string result, bool status) =>
        {
            Debug.Log(result);
        });
    }

    void Example_GetLatestBlockNumber()
    {
        var api = new GetLatestBlockNumber();

        api.Call((string result, bool status) =>
        {
            Debug.Log(result);
        });
    }

    void Example_GetTransactionByHash()
    {
        var api = new GetTransactionByHash();

        api.Call(transactionHash, (string result, bool status) =>
        {
            Debug.Log(result);
        });
    }

    void Example_GetTransactionReceipt()
    {
        var api = new GetTransactionReceipt();

        api.Call(transactionHash, (string result, bool status) =>
        {
            Debug.Log(result);
        });
    }

    void Example_Transfer()
    {
        var api = new Transfer();

        api.Call(privateKey, toAddress, amount, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }



    void Example_ERC20_GetBalance()
    {
        var api = new ERC20_GetBalance();

        api.Call(address, contractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }

    void Example_ERC20_Transfer()
    {
        var api = new ERC20_Transfer();

        api.Call(privateKey, toAddress, tokenAmount, contractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }

    void Example_ERC20_Name()
    {
        var api = new ERC20_Name();

        api.Call(contractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }

    void Example_ERC20_Symbol()
    {
        var api = new ERC20_Symbol();

        api.Call(contractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }

    void Example_ERC20_TotalSupply()
    {
        var api = new ERC20_TotalSupply();

        api.Call(contractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }



    void Example_ERC721_GetBalance()
    {
        var api = new ERC721_GetBalance();

        api.Call("0x4b32da1b12001bc358b6f901294cdf4b13fe37f1", erc721ContractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }

    void Example_ERC721_TokenOfOwnerByIndex()
    {
        var api = new ERC721_TokenOfOwnerByIndex();

        api.Call("0x4b32da1b12001bc358b6f901294cdf4b13fe37f1", 0, erc721ContractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }

    void Example_ERC721_Name()
    {
        var api = new ERC721_Name();

        api.Call(erc721ContractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }

    void Example_ERC721_Symbol()
    {
        var api = new ERC721_Symbol();

        api.Call(erc721ContractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }

    void Example_ERC721_TotalSupply()
    {
        var api = new ERC721_TotalSupply();

        api.Call(erc721ContractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }

    void Example_ERC721_OwnerOf()
    {
        var api = new ERC721_OwnerOf();

        api.Call(21, erc721ContractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }

    void Example_ERC721_TokenURI()
    {
        var api = new ERC721_TokenURI();

        api.Call(21, erc721ContractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }

    void Example_ERC721_Transfer()
    {
        var api = new ERC721_Transfer();

        api.Call(privateKey, toAddress, 21, erc721ContractAddress, (string result, bool status) =>
        {
            Debug.Log(status);
            Debug.Log(result);
        });
    }
}
