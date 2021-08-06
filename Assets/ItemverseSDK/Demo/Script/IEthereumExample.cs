using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;

using UnityEngine;

using ITEM_NET;
using IEthereumAPI;

using Nethereum.Hex.HexTypes;
using Nethereum.Web3.Accounts;

using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class IEthereumExample : MonoBehaviour
{
    IEthereum ieth;

    public string privateKey = "a6f5919db06cc6b6d3e15ced88a75f538f41f6b7a08c15fcdbbdd707b526a358";
    public string address = "0x287DB8145a10990fF6320A85fbFeCA7A44C3D562";
    public string toPrivateKey = "74945e566f482e022cbd0afba6b4c2ae15781f3551b0966e626c16fe432ec45e";
    public string toAddress = "0xB666D5dEd9510C913a0703dDa2D4803a31f56B40";

    public decimal ethAmount = 0.1m;
    public int tokenAmount = 1;
    public int erc721TokenID = 21;
    public int erc721TokenIndex = 0;

    public int blockNumber = 100000;
    public string transactionHash = "0x78d36aca6cb85068cc12a87b7394f612e82ff46f268e969c9488d1f95b8ac650";
    public string erc20ContractAddress = "0xFab46E002BbF0b4509813474841E0716E6730136"; // FaucetToken(FAU)
    public string erc721ContractAddress = "0xB9802F0bb491F2065c47C773B3f203944C4A619A";

    public LogManager logManager;

    void Start()
    {
        ieth = new IEthereum();
    }

    public void NewAccount()
    {
        Account account = IEthereumUtil.Instance.NewAccount();

        Debug.Log("privateKey: " + account.PrivateKey);
        Debug.Log("address: " + account.Address);
    }

    public void Example_GetBalance()
    {
        Debug.Log("Loading...");
        ieth.GetBalance.Call(address).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
            if (task.Result.Item2)
            {
                string text = "ETH: " + task.Result.Item1;
                logManager.BalanceLog(text);
            }
        });
    }

    public void Example_GetBlockByNumber()
    {
        Debug.Log("Loading...");
        ieth.GetBlockByNumber.Call(new HexBigInteger(blockNumber)).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_GetLatestBlockNumber()
    {
        Debug.Log("Loading...");
        ieth.GetLatestBlockNumber.Call().ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_GetTransactionByHash()
    {
        Debug.Log("Loading...");
        ieth.GetTransactionByHash.Call(transactionHash).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_GetTransactionReceipt()
    {
        Debug.Log("Loading...");
        ieth.GetTransactionReceipt.Call(transactionHash).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_Transfer()
    {
        Debug.Log("Loading...");
        ieth.Transfer.Call(privateKey, toAddress, ethAmount).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }



    public void Example_ERC20_GetBalance()
    {
        Debug.Log("Loading...");
        ieth.ERC20_GetBalance.Call(address, erc20ContractAddress).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
            if (task.Result.Item2)
            {
                string text = "ERC-20: " + task.Result.Item1;
                logManager.BalanceLog(text);
            }
        });
    }

    public void Example_ERC20_Transfer()
    {
        Debug.Log("Loading...");
        ieth.ERC20_Transfer.Call(privateKey, toAddress, tokenAmount, erc20ContractAddress).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_ERC20_Name()
    {
        Debug.Log("Loading...");
        ieth.ERC20_Name.Call(erc20ContractAddress).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_ERC20_Symbol()
    {
        Debug.Log("Loading...");
        ieth.ERC20_Symbol.Call(erc20ContractAddress).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_ERC20_TotalSupply()
    {
        Debug.Log("Loading...");
        ieth.ERC20_TotalSupply.Call(erc20ContractAddress).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }


    public void Example_ERC721_GetBalance()
    {
        Debug.Log("Loading...");
        ieth.ERC721_GetBalance.Call(address, erc721ContractAddress).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
            if (task.Result.Item2)
            {
                string text = "ERC-721: " + task.Result.Item1;
                logManager.BalanceLog(text);
            }
        });
    }

    public async void Example_ERC721_TokenOfOwnerByIndex()
    {
        Debug.Log("Loading...");

        // Determine who owns the ERC-721 token
        var resultOwnerOf = await ieth.ERC721_OwnerOf.Call(erc721TokenID, erc721ContractAddress);
        string ownerAddress = resultOwnerOf.Item1;

        // If the ERC-721 token does not exist in the user
        if (ownerAddress != address)
        {
            // ERC-721 Token Return
            await ieth.ERC721_Transfer.Call(toPrivateKey, address, erc721TokenID, erc721ContractAddress);

            // Wait to receive ERC-721 Token
            while (true)
            {
                resultOwnerOf = await ieth.ERC721_OwnerOf.Call(erc721TokenID, erc721ContractAddress);
                ownerAddress = resultOwnerOf.Item1;
                if (ownerAddress == address)
                {
                    break;
                }
            }
        }

        // get result of tokenOfOwnerByIndex
        await ieth.ERC721_TokenOfOwnerByIndex.Call(address, erc721TokenIndex, erc721ContractAddress).ContinueWith(task => {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_ERC721_Name()
    {
        Debug.Log("Loading...");
        ieth.ERC721_Name.Call(erc721ContractAddress).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_ERC721_Symbol()
    {
        Debug.Log("Loading...");
        ieth.ERC721_Symbol.Call(erc721ContractAddress).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_ERC721_TotalSupply()
    {
        Debug.Log("Loading...");
        ieth.ERC721_TotalSupply.Call(erc721ContractAddress).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_ERC721_OwnerOf()
    {
        Debug.Log("Loading...");
        ieth.ERC721_OwnerOf.Call(erc721TokenID, erc721ContractAddress).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public void Example_ERC721_TokenURI()
    {
        Debug.Log("Loading...");
        ieth.ERC721_TokenURI.Call(erc721TokenID, erc721ContractAddress).ContinueWith(task =>
        {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }

    public async void Example_ERC721_Transfer()
    {
        Debug.Log("Loading...");

        // Determine who owns the ERC-721 token
        var resultOwnerOf = await ieth.ERC721_OwnerOf.Call(erc721TokenID, erc721ContractAddress);
        string ownerAddress = resultOwnerOf.Item1;

        // If the ERC-721 token does not exist in the user
        if (ownerAddress != address)
        {
            // ERC-721 Token Return
            await ieth.ERC721_Transfer.Call(toPrivateKey, address, erc721TokenID, erc721ContractAddress);

            // Wait to receive ERC-721 Token
            while (true)
            {
                resultOwnerOf = await ieth.ERC721_OwnerOf.Call(erc721TokenID, erc721ContractAddress);
                ownerAddress = resultOwnerOf.Item1;
                if (ownerAddress == address)
                {
                    break;
                }
            }
        }

        // transfer ERC-721 token
        await ieth.ERC721_Transfer.Call(privateKey, toAddress, erc721TokenID, erc721ContractAddress).ContinueWith(task => {
            logManager.ResultLog(MethodBase.GetCurrentMethod().Name, task.Result.Item1, task.Result.Item2);
        });
    }
}
