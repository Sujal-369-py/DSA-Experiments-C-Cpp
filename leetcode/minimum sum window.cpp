#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    cout<<26%27;
}

// int main(){
//     vector<int> arr = {8,1,2,5,3};
//     int tar = 8,Min = INT_MAX,l=0,r = 0,sum=0;

//     while(r < arr.size()){
//         sum+=arr[r];
//         if(sum >= tar){
//             while(sum >= tar){
//                 if(sum == tar){
//                    break;
//                 }
//                 sum-=arr[l];
//                 l++;
//             }
//             if(sum == tar){
//                 Min = r-l+1;
//                 r++;
//                 continue;
//             }
//             if(sum < tar){
//                 l--;sum+=arr[l];
//             }
//             Min = min(r-l+1,Min);
//             r++;
//         }
//         else{
//             r++;
//         }
//     }
//     if(Min == INT_MIN) {
//         cout<<"0";
//         return 0;
//     }
//     cout<<Min;
// }
// #include<iostream>
// #include<vector>
// #include<climits>

// using namespace std;

// int main(){
//     vector<int> arr = {8,1,2,5,3};
//     int tar = 8, Min = INT_MAX, l = 0, r = 0, sum = 0;

//     while(r < arr.size()){
//         sum += arr[r];
//         if(sum >= tar){
//             while(sum >= tar){
//                 Min = min(Min, r - l + 1); // Check length here before reducing
//                 sum -= arr[l];
//                 l++;
//             }
//         }
//         r++;
//     }

//     if(Min == INT_MAX) {
//         cout << "0";
//         return 0;
//     }
//     cout << Min;
// }