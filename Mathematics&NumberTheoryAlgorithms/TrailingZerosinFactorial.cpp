#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;
    // Factorial zeros Traling
    // zeros in factorial
    int res = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        res += n / i;
    }
    std::cout << res << std::endl;
    return 0;
}