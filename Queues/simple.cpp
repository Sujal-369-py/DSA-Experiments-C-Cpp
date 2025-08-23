#include<iostream>
using namespace std; 

class Queues 
{
    private: 
    int *que,capacity,f,r;

    public:
    Queues(int size)
    {
        que = new int [size];
        capacity = size;
        f = -1;r = -1;
    }
    ~Queues()
    {
        delete [] que;
    }

    int push(int val)
    {
        if(f == -1)
        {
            f++;
        }
        que[++r] = val;
    }

    int pop()
    {
        if(r == capacity || f>r)
        {
            return -1;
        }
        return que[f++];
    }

     int peek()
    {
        if(r == capacity || f>r)
        {
            return -1;
        }
        return que[f];
    }

    bool empty()
    {
        return f == -1;
    }

    void reallocate(int size2)
    {
        int *new_que = new int[size2];
        for(int i=0; i<capacity; i++)
        {
            new_que[i] = que[i];
        }
        delete []que;
        que = new_que;
        capacity = size2;
    }
};

int main()
{
    int choice,size,value,call,check=-1,size2;
    cout<<"Enter size of stack : ";
    cin>>size;

    Queues que(3);
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
                check++;
                break;

        
            case 2:
                call = que.pop();
                if(call != -1)
                {
                    cout<<call<<" is poped";
                }
                check--;
                break;


            case 3: 
                call = que.peek();
                if(call != -1)
                {
                    cout<<call<<" is the top of Queues";
                }
                break;
            case 4: 
                cout<<"Enter re-size of Queues : ";
                cin>>size2;
                que.reallocate(size2);
                size = size2;
                cout<<"Now size of Queues is : "<<size2;
                break;
            case 5:
                if(que.empty())
                {
                    cout<<"Yes, Queues is empty";
                }
                else 
                {
                    cout<<"No, Queues is not empty";
                }
                break;
            case 6:
                cout<<"End of program...";
                return 0;

            default: 
                cout<<"Invalid choice";
                break;
        }
    }
}