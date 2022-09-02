#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
string palindrome (string s, int l,int r){
    if (l>=r){
        return "This is Palingdrome";
    }
    if(s[l] != s[r]){
        return "This is Not Palingdrome";
    }

    return palindrome(s,l+1,r-1);
}
int main()
{
    int n, a, b, c, d;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int len = s.length();
        int l = 0, r = len - 1;
        cout << palindrome(s,l,r) <<endl;
    }
    return 0;
}