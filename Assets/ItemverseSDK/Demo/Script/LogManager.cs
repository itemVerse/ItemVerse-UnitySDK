using System;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;

using Newtonsoft.Json;

public class LogManager : MonoBehaviour
{
    class SASEULError
    {
        public string status;
        public string code;
        public string msg;
        public object @params;
    }

    public Text resultLogText;
    public Text statusLogText;
    public Text balanceLogText;
    string resultLog = "";
    string statusLog = "";
    string balanceLog = "";

    bool logStatus = false;
    bool balanceLogStatus = false;

    string saveResult = "";

    void Update()
    {
        if (logStatus)
        {
            logStatus = false;
            if (resultLog.Length > 80)
            {
                resultLog = resultLog.Substring(0, 80) + "...";
            }
            resultLogText.text = "result: " + resultLog;
            statusLogText.text = "status: " + statusLog;
        }

        if (balanceLogStatus)
        {
            balanceLogStatus = false;
            balanceLogText.text = balanceLog;
        }
    }

    public void ResultCopy()
    {
        TextEditor te = new TextEditor();
        te.text = saveResult;
        te.OnFocus();
        te.Copy();
    }

    public void SaseulResultLog(string functionName, string result, bool status)
    {
        saveResult = result;

        if (status == false)
        {
            if(result.Substring(0, 1) == "{")
            {
                SASEULError e = JsonConvert.DeserializeObject<SASEULError>(result);
                e.@params = JsonConvert.SerializeObject(e.@params);
                result = $"(code: {e.code}, status: {e.status}, msg: {e.msg}, params: {e.@params})";
            }
        }

        resultLog = result;
        statusLog = status.ToString();

        Debug.Log("Call: " + functionName);
        Debug.Log("Data: " + result);
        Debug.Log("Status: " + status);

        logStatus = true;
    }

    public void ResultLog(string functionName, string result, bool status)
    {
        saveResult = result;

        resultLog = result;
        statusLog = status.ToString();

        Debug.Log("Call: " + functionName);
        Debug.Log("Data: " + result);
        Debug.Log("Status: " + status);

        logStatus = true;
    }

    public void BalanceLog(string balance)
    {
        balanceLog = balance;
        balanceLogStatus = true;
    }
}