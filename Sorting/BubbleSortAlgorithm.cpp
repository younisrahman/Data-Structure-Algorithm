#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

vector<int> BubbleSort(vector<int> vec)
{
    int size = vec.size() - 1;
    for (int i = 0; i < size; i++)
    {
        bool isSwapped = true;
        for (int j = 0; j < size - i; j++)
        {
            if (vec[j + 1] < vec[j])
            {
                isSwapped = false;
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
        if (isSwapped)
        {
            break;
        }
    }

    return vec;
}
int main()
{
    FastIO;
    vector<int> vec = {3, 5, 2, 6, 7, 8, 9, 1, 4};
    vector<int> sorted = BubbleSort(vec);
    for (int i = 0; i < sorted.size(); i++)
    {
        std::cout << sorted[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}