#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1,3,5};
    int target = 0;
    int l=0,h = arr.size()-1,mid;
        mid = (l+h)/2;
        if(arr[mid] == target) return mid;
        else if(arr[h] == target) return arr.size()-1;
        else if(target > arr[h])
        {
            h = mid-1;
        }
        else 
        {
            l = mid+1;
        }
        cout<<l<<"      "<<h<<endl;
       while(l <= h)
       {
            mid = (l+h)/2;
            cout<<arr[mid]<<" "<<endl;
            cout<<l<<"      "<<h<<endl;
            if(arr[mid] == target) 
            {
                cout<<"founded";
                return 1;
            }
            else if(target > arr[mid])
            {
                l = mid+1;
            }
            else 
            {
                h = mid-1;
            }
       }
       cout<<"Not found";
}