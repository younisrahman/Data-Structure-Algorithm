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
    vector<int> v = {3, 5, 7, 12, 66, 98, 43, 79, 32, 89};
    int k = 4;

    priority_queue<int> qa;
    for (int i = 0; i < k; i++)
    {
        qa.push(-1 * v[i]);
    }
    for (int i = k; i < v.size(); i++)
    {
        if (v[i] > (qa.top() * -1))
        {
            qa.pop();
            qa.push(-1 * v[i]);
        }
    }
    std::cout << "Kth maximum element is " << qa.top() * -1 << std::endl;
    return 0;
}