#include<iostream>
using namespace std; 

int print(int i)
{
    if(i <= 10)
    {
        cout<<i<<endl;
        print(i+1);
    }
}

int main()
{
    print(1);
}