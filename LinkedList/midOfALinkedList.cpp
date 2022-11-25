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
    int data;
    Node *next;
    /* data */
    Node(int val)
    {
        data = val;
        next = NULL;
    };
};

void insertathead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}

// Function to insert a element
// at a specified position
void insertafter(Node *head, int key, int val)
{
    Node *n = new Node(val);
    if (key == head->data)
    {
        n->next = head->next;
        head->next = n;
        return;
    }

    Node *temp = head;
    while (temp->data != key)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
    }
    n->next = temp->next;
    temp->next = n;
}

// Function to insert an
// element at the end
void insertattail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Function to print the
// singly linked list
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
Node *reverse(Node *&head)
{
    Node *cur = head;
    Node *prev = NULL;
    while (cur != NULL)
    {
        Node *temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }

    return prev;
}
Node *midNode(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
int main()
{
    FastIO;
    // Declaring an empty linked list
    Node *head = NULL;

    insertathead(head, 1);
    insertathead(head, 2);
    insertattail(head, 4);
    insertattail(head, 5);
    insertafter(head, 1, 2);
    insertafter(head, 5, 6);
    print(head);

    Node *mid = midNode(head);
    print(mid);

    cout << endl;

    return 0;
}