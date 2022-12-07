#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

void nearestSmall(vector<int> v)
{
    stack<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        while (!s.empty() && s.top() <= v[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            std::cout << "-1 ";
        }
        else
        {
            std::cout << s.top() << " ";
        }

        s.push(v[i]);
    }
}
int main()
{
    FastIO;
    vector<int> vec = {4, 10, 5, 8, 20, 15, 3, 12};
    nearestSmall(vec);
    std::cout << std::endl;
    return 0;
}