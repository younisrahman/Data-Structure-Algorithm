#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;
    a = n;
    int res = 0;
    while (n)
    {
        int temp = n % 10;
        n = n / 10;
        res = (res * 10) + temp;
    }
    cout << "Given number " << a << (res == a ? " is a " : "is not a ")
         << "Palindrome " << res << endl;
    return 0;
}