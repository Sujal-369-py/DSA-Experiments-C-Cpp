#ifndef STACKLIB_H
#define STACKLIB_H

#include <iostream>

struct stack
{
    int data;
    struct stack *next;
};

class Stack
{
private:
    struct stack *top = nullptr;
    struct stack *temp;

public:
    void push(int val);
    int pop();
    int peek();
    void traverse();
    bool isempty();
};

#endif
