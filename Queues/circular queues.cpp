#include<iostream>
using namespace std;

class Queues 
{
    private: 
    int *que,capacity,f,r,count;

    public:
    Queues(int size)
    {
        que = new int[size];
        capacity = size;
        f=-1,r=-1,count=0;
    }
    ~Queues()
    {
        delete[] que;
    }

    void push(int val)
    {
        if(f == -1)
        {
            f++;
        }
        que[++r] = val;
        count++;
        cout<<endl<<"f = "<<int(&f)<<"      "<<"r ="<<int(&r)<<endl;
    }

    int pop()
    {
        if(count == 0)
        {
            return false;
        }
        int data = que[f];
        que[++f];
        count--;
        cout<<endl<<"f = "<<int(&f)<<"      "<<"r ="<<int(&r)<<endl;
        return data;
    }

    int peek()
    {
        if(count == 0)
        {
            return false;
        }
        return que[f];
    }
};

int main()
{
    int choice,size,value,call,check=-1,size2;
    cout<<"Enter size of stack : ";
    cin>>size;

    Queues que(size);
    while(true)
    {
        cout<<endl<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                if(check == size-1)
                {
                    cout<<"Queues is overflow!";
                    break;
                }
                cout<<"Enter element to push : ";
                cin>>value;
                que.push(value);
                cout<<value<<" is pushed into the Queues.";
                check++;
                break;

            case 2:
                call = que.pop();
                if(call != false)
                {
                    cout<<call<<" is poped";
                    check--;
                }
                else 
                {
                    cout<<"Queues is overflow";
                }
                break;

            case 3: 
                call = que.peek();
                if(call != false)
                {
                    cout<<call<<" is the top of Queues";
                }
                 else 
                {
                    cout<<"Queues is overflow";
                }
                break;
            case 4:
                cout<<"End of program...";
                return 0;

            default: 
                cout<<"Invalid choice";
                break;
        }
    }
}