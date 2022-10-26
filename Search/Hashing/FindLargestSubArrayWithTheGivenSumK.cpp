#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

void subArraySum(vector<int> &arr, int sum)
{
    int currentSum = 0, start = 0, end = -1;
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++)
    {
        currentSum += arr[i];
        if (currentSum - sum == 0)
        {
            start = 0;
            end = i;
            break;
        }
        if (map.count(currentSum - sum) == 1)
        {
            start = map[currentSum - sum] + 1;
            end = i;
            break;
        }
        map.insert({currentSum, i});
    }

    if (end == -1)
    {
        std::cout << "Not Found" << std::endl;
    }
    else
    {
        std::cout << start << " , " << end << std::endl;
    }
}
int main()
{
    FastIO;
    vector<int> v = {10, 15, -5, 15, -10, 5};
    int k = 5;
    subArraySum(v, k);
    return 0;
}