#include "stacklib.h"
#include<iostream>
using namespace std;

void Stack::push(int val)
{
    temp = new stack;
    temp->data = val;
    temp->next = top;
    top = temp;
}

int Stack::pop()
{
    if (top == nullptr)
    {
        return false;
    }
    int val = top->data;
    temp = top;
    top = top->next;
    delete temp;
    return val;
}

int Stack::peek()
{
    if (top == nullptr)
    {
        return false;
    }
    return top->data;
}

void Stack::traverse()
{
    temp = top;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

bool Stack::isempty()
{
    return top == nullptr;
}
