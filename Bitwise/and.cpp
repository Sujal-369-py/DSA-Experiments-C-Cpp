#include<iostream>
using namespace std;

bool checkEven(int n)
{
    if((n&1) == 0) return true;
    return false;
}

int main()
{
   int a = 8,b = 1;
   if(checkEven(a)) cout<<"even number ";
   else cout<<"Odd nmber";
    // cout<<(a&b);
}