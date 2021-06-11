using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoroutineManager : MonoBehaviour
{
    private Dictionary<int, Coroutine> coroutineList = new Dictionary<int, Coroutine>();

    public int MakeKey()
    {
        System.Random rand = new System.Random();
        int num;
        bool status;

        while (true)
        {
            num = rand.Next(1, 10000000);
            status = false;

            foreach (int key in coroutineList.Keys)
            {
                if(num == key)
                {
                    status = true;
                    break;
                }
            }

            if(status == false)
            {
                break;
            }
        }

        return num;
    }

    public void Add(int key, Coroutine coroutine)
    {
        coroutineList.Add(key, coroutine);
    }

    public void Delete(int key)
    {
        StopCoroutine(coroutineList[key]);
        coroutineList.Remove(key);
    }
}
