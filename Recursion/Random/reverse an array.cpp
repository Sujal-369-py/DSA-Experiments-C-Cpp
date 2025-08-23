#include<iostream>
using namespace std;

int reverse(int arr[],int i,int size)
{
    if(i <(size/2))
    {
        int temp = arr[i];
        arr[i] = arr[size -1 -i];
        arr[size - 1 - i] = temp;
        return reverse(arr,i+1,size);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6},size =6;
    reverse(arr,0,size);
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
}