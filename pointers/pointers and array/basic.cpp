#include<iostream>
using namespace std;

int main()
{
    // int num = 6;
    // int *ptr = &num;

    // cout<<"addres of num : "<<&num;
    // cout<<"\naddres of num : "<<++ptr;
    // cout<<"\nvalue of num : "<<*ptr;
    // cout<<"\nvalue of num : "<<num;

    int *arr = new int[4];
    *(arr + 0) = 1;
    *(arr + 1) = 2;
    *(arr + 2) = 3;

    for(int i=0; i<4; i++)
    {
        cout<<*(arr + i)<<endl;
        cout<<(arr + i)<<endl;
    }
    cout<<(arr + 4);
    delete []arr;
}