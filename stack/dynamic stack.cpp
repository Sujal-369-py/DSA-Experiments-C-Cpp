#include<iostream>
using namespace std;

class Stack 
{
    private: 
    int *arr;
    int capacity;
    int top;
    public:
    
    Stack(int size)
    {
        arr = new int[size];
        capacity  = size;
        top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void reallocate(int size2)
    {
        int *arr2 = new int [size2];
        for(int i=0; i<capacity; i++)
        {
            arr2[i] = arr[i];
        }
        delete[] arr;
        arr = arr2;
        capacity = size2;
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
    cout<<"Enter size of stack : ";
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
                check++;
                break;

        
            case 2:
                call = stack.pop();
                if(call != -1)
                {
                    cout<<call<<" is poped";
                }
                check--;
                break;


            case 3: 
                call = stack.peek();
                if(call != -1)
                {
                    cout<<call<<" is top of stack";
                }
                break;
            case 4: 
                cout<<"Enter size of stack : ";
                cin>>size2;
                stack.reallocate(size2);
                size = size2;
                cout<<"Now size of stack is : "<<size2;
                break;
            case 5:
                cout<<"End of program...";
                return 0;

            default: 
                cout<<"Invalid choice";
                break;
        }
    }
}