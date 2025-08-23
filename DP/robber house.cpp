#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int robbery(vector<int> arr){
     int sum=0,Max = INT_MIN;

    for(int i=0; i<arr.size(); i++){
        for(int j=i; j<arr.size(); j+=2){
            sum+=arr[j];
            Max = max(Max,sum);
        }
        sum = 0;
    }
    return Max;
}

int main(){
    vector<int> arr = {2,7,9,3,1};
   cout<<robbery(arr);
}