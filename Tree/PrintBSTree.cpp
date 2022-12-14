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

Node *createBSTree()
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
    root->left = createBSTree();

    std::cout << "Enter right Data for " << d << std::endl;
    root->right = createBSTree();

    return root;
}

void printBT(const std::string &prefix, const Node *node, bool isLeft)
{
    if (node != nullptr)
    {
        std::cout << prefix;

        std::cout << (isLeft ? "left├──" : "rght└──");

        // print the value of the node
        std::cout << node->data << std::endl;

        // enter the next tree level - left and right branch
        printBT(prefix + (isLeft ? "│   " : "    "), node->left, true);
        printBT(prefix + (isLeft ? "│   " : "    "), node->right, false);
    }
}

void printBT(const Node *node)
{
    printBT("", node, false);
}

int main()
{
    FastIO;

    Node *root = createBSTree();

    printBT(root);
    return 0;
}