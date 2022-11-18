#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
priority_queue<int> maxHeap;
priority_queue<int> minHeap;

void addInHeap(int num)
{
    if (maxHeap.empty() || maxHeap.top() >= num)
    {
        maxHeap.push(num);
    }
    else
    {
        minHeap.push(num * -1);
    }

    if (maxHeap.size() > minHeap.size() + 1)
    {
        minHeap.push(maxHeap.top());
        maxHeap.pop();
    }
    else if (maxHeap.size() < minHeap.size())
    {
        maxHeap.push(minHeap.top() * -1);
        minHeap.pop();
    }
}
void findMidian()
{
    if (maxHeap.size() == minHeap.size())
        std::cout << "Maidan is: " << float(float(maxHeap.top() + float(minHeap.top() * -1)) / 2) << std::endl;
    else
    {
        std::cout << "Maidan is: " << float(maxHeap.top()) << std::endl;
    }
}
int main()
{
    FastIO;
    addInHeap(1);
    addInHeap(3);
    findMidian();

    addInHeap(5);
    findMidian();

    addInHeap(4);
    findMidian();
    return 0;
}