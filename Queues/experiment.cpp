#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30};
    for(int i=0; i<3; i++)
    {
        cout<<endl<<i;
        cout<<endl<<int(&arr[i]);
    }
}