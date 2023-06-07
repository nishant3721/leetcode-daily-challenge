#include <iostream>
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

    // ~Node()
    // {
    //     int value = this->data;
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next == NULL;
    //     }
    // }
};

void insertAtHead(Node *&head, int data)
{
    // Create new node
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&tail, int data)
{
    // Create new node
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
    // tail = newNode;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // Create new node
    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(int position, Node *&head)
{
    // deleting start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *prev = NULL;
        Node *curr = head;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr->next == NULL)
        {
            Node *temp = curr;
            prev->next = NULL;
            delete temp;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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

int main()
{
    Node *node1 = new Node(3);
    Node *head = node1;
    Node *tail = node1;

    cout << "Before insertion: ";
    printLinkedList(head);

    cout << "After insertion: ";
    // insertAtHead(head, 2);
    // insertAtHead(head, 1);
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    insertAtPosition(tail, head, 2, 9);
    printLinkedList(head);
    return 0;
}