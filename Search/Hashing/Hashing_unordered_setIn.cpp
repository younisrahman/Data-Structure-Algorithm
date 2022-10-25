#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(7);
    if (s.find(5) == s.end())
    {
        std::cout << "Not found" << std::endl;
    }
    else
    {
        std::cout << "found" << std::endl;
    }
    std::cout << s.count(10) << std::endl;

    for (auto it = s.begin(); it != s.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    s.erase(10);
    s.erase(s.begin(), s.end());
    s.size();

    return 0;
}