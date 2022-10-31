#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

void countElement(vector<int> &v, int k)
{
    unordered_map<int, int> map;
    for (int i = 0; i < k; i++)
    {
        map[v[i]]++;
    }
    std::cout << map.size() << std::endl;
    for (int i = k; i < v.size(); i++)
    {
        if (map[v[i - k]] == 1)
        {
            map.erase(i - k);
        }
        else
        {
            map[v[i - k]]--;
        }
        map[v[i]]++;

        std::cout << map.size() << std::endl;
    }
}
int main()
{
    FastIO;
    vector<int> v = {1, 2, 2, 1, 3, 1, 1, 3};
    int k = 4;
    countElement(v, k);
    return 0;
}