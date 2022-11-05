#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";
}
vector<int> insert(vector<int> &v, int val)
{
    v.push_back(val);
    int n = v.size();
    int i = n - 1;
    while (i > 1)
    {
        int parent = i / 2;
        std::cout << parent << "  " << v[i] << " " << v[parent] << std::endl;
        if (v[parent] < v[i])
        {
            swap(v[i], v[parent]);
            i = parent;
        }
        else
        {
            return v;
        }
    }

    return v;
}
vector<int> deleteHeap(vector<int> &v)
{

    int n = v.size();
    swap(v[1], v[n - 1]);
    v.pop_back();
    int i = 1;
    while (i < n - 1)
    {
        int left = v[2 * i];
        int right = v[2 * i + 1];
        int large = left > right ? 2 * i : 2 * i + 1;

        if (v[i] < v[large])
        {
            swap(v[i], v[large]);
            i = large;
        }
        else
        {
            return v;
        }
    }

    return v;
}
int main()
{
    FastIO;

    vector<int> v = {0, 50, 30, 40, 10, 5, 20, 30};
    display(v);
    int val = 60;
    vector<int> ve = insert(v, val);
    display(ve);
    vector<int> ved = deleteHeap(ve);
    display(ved);

    return 0;
}