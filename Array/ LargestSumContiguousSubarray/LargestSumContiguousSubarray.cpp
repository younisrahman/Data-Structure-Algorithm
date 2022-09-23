#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
ll sumSubArray(vector<ll> v, int n);
int main()
{
    FastIO;
    int t;
    cin >> t;
    set<int> set;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v[i] = a;
        }
        std::cout << sumSubArray(v, n) << std::endl;
    }
    return 0;
}
ll sumSubArray(vector<ll> v, int n)
{
    ll sum = -std::numeric_limits<ll>::max();
    for (int i = 0; i < n; i++)
    {
        ll innerSum = 0;
        for (int j = i; j < n; j++)
        {
            innerSum += v[j];
            if (innerSum > sum)
            {
                sum = innerSum;
            }
        }
    }

    return sum;
}