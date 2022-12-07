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
    int ans[v.size()];
    for (int i = v.size() - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() >= v[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top();
        }

        s.push(v[i]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl;
}
int main()
{
    FastIO;
    vector<int> vec = {3, 10, 5, 1, 15, 10, 7, 6};
    nearestSmall(vec);
    std::cout << std::endl;
    return 0;
}