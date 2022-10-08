// C++ Implementation of the Quick Sort Algorithm.
#include <iostream>
using namespace std;

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