#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {1};
    int l=0,h= arr.size()-1,i=0,mid;

    while(l <= h)
    {
        mid = (l+h)/2;
        if(arr[mid] < arr[i]) 
        { 
            i = mid;
        }
        if(arr[l] <= arr[mid])
        {
            if(arr[l] < arr[i]) 
            { 
                i = l;
            }
            l = mid+1;
        }
        else h = mid-1;
    }
    cout<<i;
}