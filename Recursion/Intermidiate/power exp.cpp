#include<iostream>
using namespace std;

long double pow(double x,long long int n)
{
    long double res;
    if(n <= 1)
    {
        return x;
    }
    long long int temp = n;
    if(n%2 == 0) 
    {
        n = temp;
        res = pow(x,n/2) * pow(x,n/2);
    }
    else 
    {
        n = temp;
        double res = x * (pow(x,(n-1)/2) * pow(x,(n-1)/2));
    }
    return res;

}

int main()
{
    long double bb = pow(2,10);
    cout<<bb;
}