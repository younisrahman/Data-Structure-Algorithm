#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
bool isFeasible(vector<int> &a, int k, int res)
{
    int student = 1, sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (sum + a[i] > res)
        {
            student++;
            sum = a[i];
        }
        else
        {
            sum += a[i];
        }
        return student <= k;
    }
}
int bookAllocation(vector<int> &a, int k)
{
    int min = *max_element(a.begin(), a.end());
    int max = accumulate(a.begin(), a.end(), 0);

    int res = 0;
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if (isFeasible(a, k, mid))
        {
            res = mid;
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    return res;
}
int main()
{
    FastIO;
    vector<int> vec = {10, 5, 20};
    int k = 2;
    std::cout << bookAllocation(vec, k) << std::endl;
    return 0;
}