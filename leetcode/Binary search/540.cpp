#include<vector>
#include<iostream>
using namespace std;

int single(vector<int> arr){
    int l=0,h = arr.size()-1,mid,r;

    while(l <= h){
        mid = (l+h)/2;
        r = mid;
        if(mid == 0 && arr[mid+1] != arr[mid]) return arr[mid];
        else if(mid == arr.size()-1 && arr[mid-1] != arr[mid]) return arr[mid];
        else if(arr[mid-1] != arr[mid] && arr[mid+1] != arr[mid]) return arr[mid];

        if(r%2 == 0){
            if(mid < arr.size()-1 && arr[mid+1] != arr[mid]) h = mid-1;
            else l = mid+1;
        }
        else {
            if(mid >0 && arr[mid-1] == arr[mid]) l = mid+1;
            else h = mid-1;
        }
    }
}

int main(){
    vector<int> arr = {};
    cout<<single(arr);
}