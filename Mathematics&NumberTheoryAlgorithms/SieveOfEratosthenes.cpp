// SieveOfEratosthenes.cpp
#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
bool *SieveOfEratosthenes(bool *arr, int n)
{
    for (int i = 0; i <= n; i++)
    {
        arr[i] = true;
    }
    arr[0] = arr[1] = false;
    // for (int i = 2; i * i < n; i++)
    // {
    //     if (arr[i])
    //     {
    //         for (int j = 2 * i; j <= n; j += i)
    //         {
    //             arr[j] = false;
    //         }
    //     }
    // }
    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                arr[j] = false;
            }
        }
    }

    return arr;
}
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;
    bool prime[n + 1];
    bool *ptr = SieveOfEratosthenes(prime, n);
    for (int i = 0; i <= n; i++)
    {
        cout << i << " is " << prime[i] << endl;
    }
    return 0;
}