#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {9,9,9,9,9,9,9,9,9};
    int k=1;

    int carry = 0;
    for(int i=arr.size()-1; i>=0; i--){
        int res = arr[i]+carry+k%10;
        k/=10;carry=0;
        if(res > 9){
            carry = 1;
            res%=10;
        }
        arr[i] = res;
    }
    if(carry == 1){
        arr.insert(arr.begin(),1);
    }

    for(int i:arr){
        cout<<i<<" ";
    }
}