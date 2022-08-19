// (a+b)%n = (a%n + b%n)%n
// (a-b)%n = (a%n - b%n)%n
// (a*b)%n = (a%n * b%n)%n

#include <bits/stdc++.h>
// a power b = if even = (a square 2) b/2 else a* a power b-1
using namespace std;
long fastPower(long a, long b, int n);
int main()
{
    int n, c;
    long a, b;
    vector<int> vector;
    set<int> set;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        cout << fastPower(a, b, c) << endl;
    }
    return 0;
}

long fastPower(long a, long b, int n)
{
    long res = 1;
    while (b > 0)
    {
        if ((b & 1) != 0)
        {
            res = (res % n * a % n) % n;
        }
        a = (a % n * a % n) % n;
        b = b >> 1; // Divide  by 2
    }
    return res;
}
