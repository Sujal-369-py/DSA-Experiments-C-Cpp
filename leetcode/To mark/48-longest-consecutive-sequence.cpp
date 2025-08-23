#include<iostream>
#include<vector>
#include<climits>
#include<unordered_map>
using namespace std;

// int longest(vector<int> arr){
//     unordered_map<int,int> ht;
//     int count=0,maximum = INT_MIN;
//     for(int i=0; i<arr.size(); i++){
//         ht[arr[i]] = i;
//     }

//     for(int i=0; i<arr.size(); i++){
//         if(ht.find(arr[i]-1) == ht.end()){
//            if(ht[arr[i]-1] != -1){
//             count++;
//             ht[arr[i]-1] = -1;
//            }
//            else continue;
//         }
//     }
//     return count+1;
// }


int main(){
    // vector<int> arr = {1,100,4,3,8,7,0,6,10,11,101,200,9};
    vector<int> arr = {100,4,200,3,1,2};
        // unordered_map<int,int> ht;
        // ht[1] = 0;
        // ht[2] = 1;
        // ht[3] = 2;
        // for(auto &i:ht){
        //     cout<<i.first<<" : "<<i.second<<endl;
        // }
        // ht[3] = -1;
        // for(auto &i:ht){
        //     cout<<i.first<<" : "<<i.second<<endl;
        // }
    unordered_map<int,int> ht;
    int count=0,maximum = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        ht[arr[i]] = i;
    }
    for(int i=0; i<arr.size(); i++){
       int j = arr[i];
       while(ht.find(j-1) != ht.end() && ht[j-1] != -1){
            count++;
            j = j-1;
            ht[j] = -1;
       }
    //    cout<<count<<endl;
       maximum = max(maximum,count);
       count=0;
    }
    cout<<++maximum;
        // for(auto &i:ht){
        //     cout<<i.first<<" : "<<i.second<<endl;
        // }
        // cout<<"coun = "<<count;
   
    
}