#include<iostream>
using namespace std;

struct stack 
{
    int data;
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
        top = temp;
   }

   int pop()
   {
        if(top == NULL)
        {
            return -1;
        }
        int val = top->data;
        temp = top;
        top = top->next;
        delete temp;
        return val;
   }

   int peek()
   {
        if(top == NULL)
        {
            return -1;
        }
        return top->data;
   }

   void traverse()
   {
        temp = top;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
   }
};

int main()
{
    int choice,val,call;
    Stack stack;
    while(true)
    {
        cout<<endl<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1: 
                cout<<"Enter the value you want to enter : ";
                cin>>val;
                stack.push(val);
                cout<<val<<" is pushed";
                break;
            case 2: 
                call = stack.pop();
                if(call == -1)
                {
                    cout<<"Stack is underflow";
                }
                else 
                {
                    cout<<call<<" is poped";
                }
                break;
            case 3: 
                call = stack.peek();
                if(call == -1)
                {
                    cout<<"Stack is underflow";
                }
                else 
                {
                    cout<<call<<" is top of stack";
                }
                break;
            case 4:
                stack.traverse();
                break;
            case 5: 
                return 0;
            default: 
                cout<<"Invalid credit";
        }
    }
}