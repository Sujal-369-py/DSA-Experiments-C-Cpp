#include<iostream>
using namespace std;

int *result(int arr[])
{
    int *res = new int [5] {0};
     for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[j] > arr[i])
            {
                res[i] = arr[j];
                break;
            }
        }
    }
    return res;
}

int main()
{
    int arr[] = {6,0,8,1,3};
    int *call = result(arr);
    for(int i=0; i<5; i++)
    {
        cout<<call[i]<<" ";
    }

}