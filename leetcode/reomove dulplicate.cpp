#include<iostream>
#include<vector>
using namespace std;

int remove_dulplicate(int arr[],int n)
{
    int duplicate = 0;
    for(int i=0; i<n; i++)
    {
        for(int j = i+1 ; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate+=1;
            }
        }
    }
    return duplicate;
}

int main()
{
    int arr[] ={1,2,2};
    int call = remove_dulplicate(arr,3);
    cout<<"toatal duplicate : "<<call;
}