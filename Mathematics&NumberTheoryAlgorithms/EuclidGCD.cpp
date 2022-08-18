#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int gcd(int a, int b);
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n >> a;
    cout << gcd(a, n) << endl;
    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}