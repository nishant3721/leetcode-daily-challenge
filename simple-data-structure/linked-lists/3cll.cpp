#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next == NULL;
        }
        cout << "memory is free for node with data: " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;
        while (element != curr->data)
        {
            curr = curr->next;
        }

        Node *newNode = new Node(data);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void deleteNode(Node *&tail, int data)
{
    if (tail == NULL)
    {
        cout << "List is empty";
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != data)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if (curr == prev)
        {
            tail == NULL;
        }
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void printLinkedList(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "tail is empty";
    }

    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);

    cout << endl;
}

int main()
{

    Node *tail = NULL;

    insertNode(tail, 5, 3);
    // insertNode(tail, 3, 5);
    // insertNode(tail, 5, 8);
    // insertNode(tail, 3, 1);
    deleteNode(tail, 3);
    printLinkedList(tail);
    return 0;
}