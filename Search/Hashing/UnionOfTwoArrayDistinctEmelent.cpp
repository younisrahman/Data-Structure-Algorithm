#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    FastIO;
    int arr[] = {5, 10, 15, 5};
    int arr2[] = {5, 4, 10, 4, 15};

    unordered_set<int>
        s;
    for (int i = 0; i < 4; i++)
    {
        s.insert(arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        s.insert(arr2[i]);
    }
    std::cout << s.size() << std::endl;
    return 0;
}