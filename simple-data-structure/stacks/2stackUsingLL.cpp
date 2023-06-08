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
};

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int data)
    {
        // Create new Node
        Node *newNode = new Node(data);
        if (!newNode)
        {
            cout << "Stack overflow";
            exit(1);
        }
        else
        {
            newNode->next = top;
            top = newNode;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void pop()
    {
        if (!isEmpty())
        {
            Node *temp = top;
            top = top->next;
            free(temp);
        }
        else
        {
            cout << "Stack underflow";
        }
    }

    int peek()
    {
        if (!isEmpty())
        {
            return top->data;
        }
        else
        {
            cout << "Stack underflow";
        }
    }

    void display()
    {
        if (top == NULL)
        {
            cout << "Stack is empty";
            exit(1);
        }
        else
        {
            Node *temp = top;
            while (top != NULL)
            {
                cout << temp->data;
                temp = temp->next;
                if (temp != NULL)
                {
                    cout << " -> ";
                }
            }
        }
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    // s.display();
    // cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}