#include <iostream>
#include <vector>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
void heapify(vector<int> &a, int n, int i)
{
    int largest = i;
    int l = 2 * i;
    int r = 2 * i + 1;
    if (l <= n && a[l] > a[largest])
    {
        largest = l;
    }
    if (r <= n && a[r] > a[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}
void buildheap(vector<int> &a, int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(a, n, i);
    }
}
int main()
{
    FastIO;
    // vector<int> v = {40, 10, 30, 50, 60, 15};
    vector<int> v = {50, 20, 40, 5, 10, 30};
    buildheap(v, 6);
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << " " << std::endl;
    return 0;
}