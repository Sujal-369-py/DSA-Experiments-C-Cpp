#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {2,1,4,3,5,6};
    int l=0,h= arr.size()-1,mid,tar = 6,n = arr.size()-1;

    while(l <= h)
    {
        mid = (l+h)/2;
        if(mid > 0 || mid < n) 
        { 
            if(arr[mid] == tar) 
            {
                cout<<"Founded at index : "<<mid;
                break;
            }
            else if(mid > 0 && arr[mid-1] == tar)
            {
                cout<<"Founded at index : "<<mid-1;
                break;
            }
            else if(mid < n && arr[mid+1] == tar)
            {
                cout<<"Founded at index : "<<mid+1;
                break;
            }
        }
        else if(tar < arr[mid]) h = mid-1;
        else l = mid+1;
    }
    cout<<"Not founded";
}