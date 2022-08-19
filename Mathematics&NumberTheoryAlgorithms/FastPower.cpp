#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int fastPower(int a, int b);
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cout << fastPower(a, b) << endl;
    }
    return 0;
}

int fastPower(int a, int b)
{
    int res = 1;
    while (b > 0)
    {
        if ((b & 1) != 0)
        {
            res = res * a;
        }
        a = a * a;
        b = b >> 1; // Divide  by 2
    }
    return res;
}
