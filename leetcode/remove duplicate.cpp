#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
        int i=1,j=0;

    while(i <= arr.size()-1)
    {
        if(arr[i] != arr[i-1])
        {
           arr[j++] = arr[i-1];
        }
        i++;
    }
    if(i == arr.size())
    {
        arr[j++] = arr[i-1];
    }
    for(int i=0; i<j; i++)
    {
        cout<<arr[i]<<" ";
    }
}