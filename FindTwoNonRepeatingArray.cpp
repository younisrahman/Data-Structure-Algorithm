// find the non repeating number in an array while every element in repeting twice
#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 0, c, d;
    int arr[] = {5, 4, 1, 4, 3, 5, 1, 2};
    n = 8;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }

    /* Get the rightmost set bit in set_bit_no */
    // int set_bit_no = res & ~(res - 1);
    int set_bit_no = res & ~(res - 1);
    /* Now divide elements in two sets by
    comparing rightmost set bit of Xor with bit
    at same position in each element. */
    for (int i = 0; i < n; i++)
    {

        /*Xor of first set */
        if (arr[i] & set_bit_no)
            a = a ^ arr[i];
        /*Xor of second set*/
        else
        {
            b = b ^ arr[i];
        }
    }
    cout << a << " " << b << endl;
    return 0;
}