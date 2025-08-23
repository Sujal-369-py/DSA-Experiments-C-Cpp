#include<iostream>
using namespace std;

struct stack 
{
    int data;
    int smallest;
    struct stack *next;
};

class Stack 
{
    private: 
    struct stack *top = NULL;
    struct stack *temp;

    public:
    void push(int val)
    {
        temp = new stack;
        temp->data = val;
        temp->next = top;
        if(top == NULL)
        {
            temp->smallest = val;
        }
        else 
        {
            // if(val < top->smallest)
            // {
            //     temp->smallest = val;
            // }
            // else 
            // {
            //     temp->smallest = top->smallest;
            // }
            temp->smallest = min(val,top->smallest);
        }
        top = temp;
    }

    int pop()
    {
        if(top == NULL)
        {
            return -1;
        }
        temp = top;
        top = top->next;
        delete temp;
    }

    int peek()
    {
        if(top == NULL)
        {
            return -1;
        }
        cout<<endl<<top->data;
    }

    void min_stack()
    {
        cout<<endl<<top->smallest;
    }
};

int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.peek();
    stack.push(5);
    stack.min_stack();
    stack.pop();
    stack.peek();
    stack.min_stack();
}