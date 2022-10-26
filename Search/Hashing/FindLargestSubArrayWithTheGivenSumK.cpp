#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

void subArraySum(vector<int> &arr, int sum)
{
    int currentSum = 0, start = 0, end = -1, size = 0, ansStart = 0, ansEnd = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            currentSum += -1;
        }
        else
        {
            currentSum += 1;
        }
        if (currentSum == 0)
        {
            start = 0;
            end = i;
            if (size < (end - start))
            {
                size = end - start;
                ansStart = 0;
                ansEnd = i;
            }
        }
        if (map[currentSum - sum] == 0)
        {
            start = map[currentSum - sum] + 1;
            end = i;

            if (size < (end - start))
            {
                size = end - start + 1;
                ansStart = start;
                ansEnd = i;
            }
        }
        map.insert({currentSum, i});
    }

    if (end == -1)
    {
        std::cout << "Not Found" << std::endl;
    }
    else
    {
        std::cout << ansStart << " , " << ansEnd << " size: " << size << std::endl;
    }
}
int main()
{
    FastIO;
    vector<int> v = {1, 1, 0, 1, 1, 0, 0};
    int k = 0;
    subArraySum(v, k);
    return 0;
}