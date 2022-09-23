
#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
long mejorityVoting(vector<int> v, int n)
{
    int i, candidate = 0, vote = 0;
    for (i = 0; i < n; i++)
    {
        if (vote == 0)
        {
            candidate = v[i];
            vote++;
        }
        else
        {
            if (candidate == v[i])
            {
                vote++;
            }
            else
            {
                vote--;
            }
        }
    }
    int count;
    for (i = 0; i < n; i++)
    {
        if (candidate == v[i])
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return candidate;
    }

    return -1;
}
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[i] = a;
        }
        long mejority = mejorityVoting(v, n);
        std::cout << "the mejority element is " << mejority << std::endl;
    }
    return 0;
}