#include<iostream>
using namespace std; 

int swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 3,b=9;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swap \n"<<a<<" "<<b;
}