#include<iostream>
using namespace std;

int SumOfArray(int *a,int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    cout<<SumOfArray(arr,6);
}