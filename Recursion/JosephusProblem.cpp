#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int josephusProblem(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    return (josephusProblem(n - 1, k) + k) % n;
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
        std::cout << josephusProblem(a, b) << std::endl;
    }
    return 0;
}