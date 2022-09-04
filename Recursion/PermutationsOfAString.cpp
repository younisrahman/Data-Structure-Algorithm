#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
void permutation(string s, int l, int r)
{
    if (l == r)
    {
        std::cout << s << std::endl;
    }
    for (int i = l; i < r; i++)
    {
        char c = s[i];
        s[i] = s[l];
        s[l] = c;

        permutation(s, l + 1, r);

        char ch = s[i];
        s[i] = s[l];
        s[l] = ch;
    }
}
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        permutation(s, 0, s.length());
    }
    return 0;
}