#include<iostream>
#include<vector>
using namespace std;

// int * ProductOfarratexceptself(vector<int> &nums){
//     vector<int> ans;
//     ans[0] = 1;
//     for(int i=1; i<nums.size(); i++){
//         ans[i] = nums[i] * ans[i];
//     }
//     int r=1;
//     for(int i = nums.size()-1; i<=0; i++){
//         ans[i]*=r;
//         r*=nums[i];
//     }
//     return ans;
// }

int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> ans = {0};
    ans[0] = 1;
    for(int i=1; i<nums.size(); i++){
        ans[i] = nums[i-1] * ans[i-1];
    }
    int r=1;
    for(int i = nums.size()-1; i>=0; i--){
        ans[i] = ans[i]*r;
        r*=nums[i];
    }
    for(int i=0; i<nums.size(); i++){
        cout<<ans[i]<<" ";
    }
}