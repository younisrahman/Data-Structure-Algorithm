#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
class Node
{

public:
    Node *left;
    Node *right;
    int data;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *createBST()
{
    Node *root = NULL;
    std::cout << "Enter Data : ";
    int d;
    cin >> d;
    cout << std::endl;
    if (d == -1)
        return NULL;

    root = new Node(d);
    std::cout << "Enter left Data for " << d << std::endl;
    root->left = createBST();

    std::cout << "Enter right Data for " << d << std::endl;
    root->right = createBST();

    return root;
}
int main()
{
    FastIO;

    Node *root = createBST();

    return 0;
}