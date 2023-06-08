#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    // Create new node
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node *&tail, int data)
{
    // Create new node
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    // Create new node
    Node *newNode = new Node(data);

    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    // insertAtHead(head, 3);
    // insertAtHead(head, 4);
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtPosition(tail, head, 2, 35);
    printLinkedList(head);
    return 0;
}