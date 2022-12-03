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
    Node *Random;
    /* data */
    Node(int val)
    {
        data = val;
        next = NULL;
        Random = NULL;
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
bool isPalindrome(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *cur = head;
    Node *mid = midNode(head);
    Node *last = reverse(mid);
    print(last);
    while (last != NULL)
    {
        if (last->data != cur->data)
            return false;
        last = last->next;
        cur = cur->next;
    }

    return true;
}

Node *duplicate(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        Node *temp = cur->next;
        cur->next = new Node(cur->data);
        cur->next->next = temp;
        cur = temp;
    }

    cur = head;
    while (cur != NULL)
    {
        if (cur->next != NULL)
        {
            cur->next->Random = (cur->Random != NULL) ? cur->Random->next : NULL;
        }
        cur = cur->next->next;
    }
    Node *orig = head;
    Node *copy = head->next;
    Node *temp = copy;
    while (orig != NULL)
    {
        orig->next = orig->next->next;
        copy->next = copy->next->next;
        orig = orig->next;
        copy = copy->next;
    }

    return temp;
}
int main()
{
    FastIO;
    Node *head = new Node(1);
    Node *first = new Node(2);
    head->next = first;
    Node *second = new Node(3);
    first->next = second;
    Node *third = new Node(4);
    second->next = third;
    Node *fourth = new Node(5);
    third->next = fourth;

    head->Random = second;
    first->Random = head;
    second->Random = second;
    third->Random = first;
    fourth->Random = third;

    print(head);

    return 0;
}