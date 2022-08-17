// PrimeNumbers.cpp
#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime" << endl;
            return 0;
        }
    }
    cout << "Prime" << endl;
    return 0;
}