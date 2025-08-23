#include<iostream>
using namespace std; 

int print(int i)
{
    if(i >= 1)
    {
        cout<<i<<endl;
        print(i-1);
    }
}

int main()
{
    print(10);
}