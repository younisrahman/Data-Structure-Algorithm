#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;

    while (n)
    {
        a++;
        n = n & (n - 1);
    }
    cout << a << endl;
    return 0;
}