// find the non repeating number in an array while every element in repeting twice
#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    int arr[] = {5, 4, 1, 4, 3, 5, 1};
    n = 7;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    cout << res << endl;
    return 0;
}