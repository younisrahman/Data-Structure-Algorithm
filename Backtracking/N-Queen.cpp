#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

typedef vector<vector<int>> Matrix;
void print(Matrix &m)
{
    int M = m.size();
    int N = m[0].size();
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

int n_queen(int arr[], int row)
{
}
int main()
{
    // int n, a;

    // cin >> n;
    // while (n--)
    // {
    //     cin >> a;
    //     int arr[a][a];
    //     n_queen(arr, a)
    // }

    Matrix m = {{1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 1, 2, 3}};
    print(m);

    // To initialize a 3 x 4 matrix with 0:
    Matrix n(3, vector<int>(4, 0));
    print(n);

    return 0;
}