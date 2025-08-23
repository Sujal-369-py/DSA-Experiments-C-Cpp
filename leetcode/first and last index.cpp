#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {1,2,2,2,3,4,5};
    int target = 2,l=0,h=arr.size()-1,mid,f=-1,las=-1;

    while(l <= h)
    {
        mid = (l+h)/2;
        if(arr[mid] == target && mid == 0)
        {
            f =mid; 
            break;
        }  
        else if(arr[mid] == target && mid > 0 && arr[mid-1] != target)
        {
        f = mid; 
        break;   
        } 
        else if(arr[mid] < target) l = mid+1;
        else h = mid-1;
    }
    l=0,h = arr.size()-1;
    while(l <= h)
    {
        mid = (l+h)/2;
        if(arr[mid] == target && mid == arr.size()-1)
        {
            las = mid; 
            break;
        }  
        else if(arr[mid] == target && mid <arr.size()-1 && arr[mid+1] != target)
        {
        las = mid; 
        break;   
        } 
        else if(arr[mid] < target) l = mid+1;
        else h = mid-1;
    }
    cout<<f<<"  "<<las;
}