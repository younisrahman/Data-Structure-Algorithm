#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

vector<int> SelectionSort(vector<int> vec) // O(n^2)
{
    int size = vec.size();
    for (int i = 0; i < size - 1; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < size; j++)
        {
            if (vec[minimum] > vec[j])
            {
                minimum = j;
            }
        }
        if (minimum != i)
        {
            int temp = vec[i];
            vec[i] = vec[minimum];
            vec[minimum] = temp;
        }
    }
    return vec;
}
int main()
{
    FastIO;
    vector<int> vec = {3, 5, 2, 6, 7, 8, 9, 1, 4};
    vector<int> sorted = SelectionSort(vec);
    for (int i = 0; i < sorted.size(); i++)
    {
        std::cout << sorted[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}