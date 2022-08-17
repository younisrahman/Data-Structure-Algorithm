// factorial
// factorial(n) = n * factorial(n-1)
// factorial(0) = 1
// factorial(1) = 1
#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}