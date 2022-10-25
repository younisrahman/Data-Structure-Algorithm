#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
bool customBinarySearch(vector<int> &arr, int key)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return true;
        }
        if (arr[low] < arr[mid])
        {
            if (key >= arr[low] && key < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (key > arr[mid] && key <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}
int main()
{
    FastIO;
    vector<int> v = {12, 15, 16, 18, 20, 1, 2, 4, 6, 8, 9};
    int key = 16;
    cout << customBinarySearch(v, key) << endl;
    int key1 = 8;
    cout << customBinarySearch(v, key1) << endl;
    int key2 = 26;
    cout << customBinarySearch(v, key2) << endl;

    return 0;
}