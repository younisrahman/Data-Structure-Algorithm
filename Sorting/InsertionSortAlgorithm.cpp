#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

vector<int> InsertionSort(vector<int> vec) // O(n^2)
{
    int size = vec.size();
    for (int i = 1; i < size; i++)
    {
        int temp = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > temp)
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = temp;
    }

    return vec;
}
int main()
{
    FastIO;
    vector<int> vec = {3, 5, 2, 6, 7, 8, 9, 1, 4};
    vector<int> sorted = InsertionSort(vec);
    for (int i = 0; i < sorted.size(); i++)
    {
        std::cout << sorted[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}