#include<iostream>
using namespace std;

class Stack 
{
    private:
    int *arr;
    int top;
    int capacity;

    public:
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
        cout<<endl<<"Stack is initilised with size : "<<size;
    }
    ~Stack()
    {
        delete[] arr;
    }

    void push(int val)
    {
        arr[++top] = val;
        cout<<val<<" is pushed"<<endl;
    }

    int pop()
    {
        if(top == -1)
        {
            cout<<"Stack is underflow!"<<endl;
            return -1;
        }
        return arr[top--];
    }

    int peek()
    {
        if(top == -1)
        {
            cout<<"Stack is underflow!"<<endl;
            return -1;
        }
        return arr[top];
    }
};

int main()
{
    int choice,size,value,call,check=-1,size2;
    cout<<"Enter size of stack : "<<endl;;
    cin>>size;

    Stack stack(size);

    while(true)
    {
        cout<<endl<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1: 
                if(check == size-1)
                {
                    cout<<"Stack is overflow!";
                    break;
                }
                cout<<"Enter element to push : ";
                cin>>value;
                stack.push(value);
                break;

        
            case 2:
                call = stack.pop();
                if(call != -1)
                {
                    cout<<call<<" is poped";
                }
                break;


            case 3: 
                call = stack.peek();
                if(call != -1)
                {
                    cout<<call<<" is top of stack";
                }
                break;
            case 5: 
                break;

            default: 
                cout<<"Invalid choice";
                break;
        }
    }
}