#include <iostream>
#include <queue>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(6);
    q.push(15);
    q.push(10);

    int count = 1;
    while (!q.empty())
    {
        std::cout << count << " " << q.top() << std::endl;
        q.pop();
        count++;
    }

    return 0;
}