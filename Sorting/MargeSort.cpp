// C++ Implementation of the Quick Sort Algorithm.
#include <iostream>
using namespace std;

void marge(int arr[], int l, int mid, int r)
{
    int b[l + r];
    int i = l;
    int j = mid + 1;
    int k = l;
    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= r)
        {
            b[k] = arr[j];
            k++;
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arr[i];
            k++;
            i++;
        }
    }

    for (k = l; k <= r; k++)
    {
        arr[k] = b[k];
    }
}

void margeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        margeSort(arr, l, mid);
        margeSort(arr, mid + 1, r);
        marge(arr, l, mid, r);
    }
}

int main()
{

    int arr[] = {9, 3, 4, 2, 1, 8, 5, 7, 6};
    int n = 9;

    margeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}