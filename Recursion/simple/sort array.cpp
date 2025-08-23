#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &arr,int size,int i)
{
    if(i == size) return;
    if(arr[i-1] > arr[i])
    {
        int temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = temp;
    }
    sort(arr,size,i+1);
}

int main()
{
    vector<int> arr = {4,3,9,6,8,1,7};
    sort(arr,arr.size(),1);
    for(int &i:arr)
    {
        cout<<i<<" ";
    }
}