#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
void powerSet(string s, int i , string ps){
    if(i==s.length())
    {
        cout<< ps << " ";
        return;
    }
    powerSet(s, i + 1, ps + s[i]);
    powerSet(s, i + 1, ps);
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
        powerSet(s,0,"");
        cout << endl;
    }
    return 0;
}