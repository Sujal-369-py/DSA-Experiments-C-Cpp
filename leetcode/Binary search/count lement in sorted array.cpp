#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,10,10,10,15,17};
    int l=0,h= arr.size()-1,target = 10,i = -1,j = -1;

    while(l <= h)
    {
        int mid = (l+h)/2;
        if(arr[mid] == target && arr[mid-1] != target) 
        {
            i = mid;
            break;
        }
        else if(target < arr[mid]) h = mid-1;
        else l = mid+1; 
    }
    l=0,h=arr.size()-1;
    while(l <= h)
    {
        int mid = (l+h)/2;
        if(arr[mid] == target && arr[mid+1] != target)
        { 
            j = mid;
            break;
        } 
        else if(target < arr[mid]) h = mid-1;
        else l = mid+1; 
    }
    cout<<"Total number of times "<<target<<" appered is : "<<abs(i-j)+1;
}