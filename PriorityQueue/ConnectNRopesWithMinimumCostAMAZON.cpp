#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int connectRope(vector<int> &v)
{
    priority_queue<int> queue;
    for (int i = 0; i < v.size(); i++)
    {
        queue.push(v[i] * -1);
    }

    int ans = 0;
    while (queue.size() > 1)
    {
        int first = queue.top() * -1;
        queue.pop();
        int second = queue.top() * -1;
        queue.pop();
        int sum = first + second;
        ans += sum;
        queue.push(sum * -1);
    }
    return ans;
}
int main()
{
    FastIO;
    vector<int> v = {2, 5, 4, 8, 6, 9};
    std::cout << connectRope(v) << std::endl;
    return 0;
}