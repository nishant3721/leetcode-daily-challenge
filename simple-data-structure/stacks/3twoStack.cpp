#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int size)
    {
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
        arr = new int[size];
    }

    void push1(int data)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = data;
        }
        else
        {
            cout << "Stack overflow";
            exit(1);
        }
    }

    void push2(int data)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = data;
        }
        else
        {
            cout << "Stack overflow";
            exit(1);
        }
    }

    void pop1()
    {
        if (top1 >= 0)
        {
            top1--;
        }
        else
        {
            exit(1);
        }
    }

    void pop2()
    {
        if (top2 < size)
        {
            top2++;
        }
        else
        {
            exit(1);
        }
    }
};

int main()
{

    return 0;
}