#include<iostream>
using namespace std;

int main()
{
    int size,size2,choice;
    cout<<"Enter the size of array : ";
    cin>>size;

    int *arr = new int[size];
    for(int i=0; i<size; i++)
    {
        cout<<endl<<"Enter the "<<i+1<<" elemnet : ";
        cin>>arr[i];
    }
    while(true)
    {
        cout<<endl<<"Enter your choice : ";
        cin>>choice;
        if(choice == 1)
        {
            for(int i=0; i<size; i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else if(choice == 2)
        {
            cout<<"Enter the  size of new array : ";
            cin>>size2;
            int *arr2 = new int[size2];
            for(int i=0; i<size; i++)
            {
               arr2[i] = arr[i];
            }
            cout<<"Enter the other elements : ";
            for(int i=size; i<size2; i++)
            {
                cout<<endl<<"Enter the "<<i+1<<" elemnet : ";
                cin>>arr2[i];
            }
            delete[] arr;
            arr = arr2;
            arr2 = nullptr;
        }
        else if(choice == 3)
        {
            for(int i=0; i<size2; i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else if(choice == 4)
        {
           break;
        }
        else 
        {
            cout<<"wrong input!!";
        }
    }
    delete []arr;
}