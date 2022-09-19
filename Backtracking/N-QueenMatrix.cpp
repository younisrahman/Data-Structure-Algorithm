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
bool isSafe(Matrix &board, int row, int col, int n)
{
    for (int j = col; j < n; j++)
    {
    }

    return false;
}

bool n_queen(Matrix &board, int n, int row)
{
    if (row == n)
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 1;
            if (n_queen(board, n, (row + 1)))
            {
                return true;
            }
            board[row][col] = 0;
        }
    }
    return false;
}
int main()
{
    int n, a;

    cin >> n;
    while (n--)
    {
        cin >> a;
        Matrix n(a, vector<int>(a, 0));
        cout << n_queen(n, a, 0) << endl;
    }

    // Matrix m = {{1, 2, 3, 4},
    //             {5, 6, 7, 8},
    //             {9, 1, 2, 3}};
    // print(m);

    // // To initialize a 3 x 4 matrix with 0:
    // Matrix n(3, vector<int>(4, 0));
    // print(n);

    return 0;
}