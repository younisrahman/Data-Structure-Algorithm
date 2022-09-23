#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
ll kadensAlgo(vector<ll> v, int n);
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
        std::cout << kadensAlgo(v, n) << std::endl;
    }
    return 0;
}
ll kadensAlgo(vector<ll> v, int n)
{
    ll sum = -std::numeric_limits<ll>::max();
    ll currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += v[i];
        if (currentSum > sum)
        {
            sum = currentSum;
        }

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }

    return sum;
}