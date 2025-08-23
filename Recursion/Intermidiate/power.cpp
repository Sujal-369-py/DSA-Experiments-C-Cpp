#include<iostream>
using namespace std;

double pow(double x,int n,double res)
{
    if(n >= 0)
    {
        if(n ==2) return 1;
        res = x*pow(x,n-1,res);
        return res;
    }
    else 
    {
        if(n == -1)return 1;
        res = x*pow(x,n+1,res);
        return 1/(res*x);
    }
}

int main()
{
    cout<<pow(2,1073741824,1);
}