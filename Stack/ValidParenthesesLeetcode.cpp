#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

bool isOpening(char a)
{
    return a == '(' || a == '{' || a == '[';
}
bool isMatching(char a, char b)
{
    return a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']';
}

bool isValidParentheses(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (isOpening(str[i]))
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            else if (isMatching(s.top(), str[i]))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return s.empty();
}
int main()
{
    FastIO;
    string str = "()[]({}[{}])";
    std::cout << isValidParentheses(str) << std::endl;

    return 0;
}