// C++ Implementation of the Quick Sort Algorithm.
#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[l]);
    return j;
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pivot = partition(arr, l, h);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, h);
    }
}

int main()
{

    int arr[] = {9, 3, 4, 2, 1, 8, 5, 7, 6};
    int n = 9;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}