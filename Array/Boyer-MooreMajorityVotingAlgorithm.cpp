#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int findMajority(vector<int> arr, int n);
int main()
{
    FastIO;
    int t;
    cin >> t;

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
        int majority = findMajority(v, n);
        cout << " The majority element is : " << majority << endl;
    }
    return 0;
}
int findMajority(vector<int> arr, int n)
{
    int i, candidate = -1, votes = 0;
    for (i = 0; i < n; i++)
    {
        if (votes == 0)
        {
            candidate = arr[i];
            votes = 1;
        }
        else
        {
            if (arr[i] == candidate)
            {
                votes++;
            }
            else
            {
                votes--;
            }
        }
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
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