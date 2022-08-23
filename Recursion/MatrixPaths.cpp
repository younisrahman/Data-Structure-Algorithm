#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int matrixPaths(int n, int m)
{
    if (n == 1 || m == 1)
    {
        return 1;
    }
    return matrixPaths(n - 1, m) + matrixPaths(n, m - 1);
}
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        std::cout << matrixPaths(a, b) << std::endl;
    }
    return 0;
}