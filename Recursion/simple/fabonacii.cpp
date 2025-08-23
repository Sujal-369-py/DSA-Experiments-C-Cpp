#include<iostream>
using namespace std;

int fab(int n)
{
    if(n == 1 || n == 2) return 1;
    int res = fab(n-1) + fab(n-2);
    return res;
}

int main()
{
    cout<<fab(10);
}