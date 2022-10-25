#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

bool binarySearch(int arr[], int low, int high, int key)
{

    bool ans = false;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (key == arr[mid])
        {
            ans = true;
            break;
        }
        if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
void searchInfinite(int arr[], int key)
{
    int low = 0, high = 1;
    while (arr[high] < key)
    {
        low = high;
        high = high * 2;
    }

    std::cout << binarySearch(arr, low, high, key) << std::endl;
}
int main()
{
    FastIO;
    int arr[] = {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
    };
    int key = 17;
    searchInfinite(arr, key);
    //     std::cout
    // << binarySearch(arr, 9, key) << std::endl;
    return 0;
}