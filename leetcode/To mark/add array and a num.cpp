#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr = {9,9,9};
    int n = 1;
    int store=0;
    for(int &i:arr){
        store = store * 10 + i; 
    }
    arr.clear();
    store+=n;
    while(store > 0){
        int r = store%10;
        arr.push_back(r);
        store/=10;
    }
    
    for(int i=arr.size()-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }

}