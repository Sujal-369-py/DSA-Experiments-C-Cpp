#include<unordered_map>
#include<vector>
#include<iostream>
#include<climits>
using namespace std;

int numb(vector<int> arr){
    unordered_map<int,int>ht;
    int s=INT_MAX;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] < s) s = arr[i];
        ht[arr[i]] = i;
    }
    if(s != 0) return 0;
    int j = s;
    for(int i=0; i<arr.size(); i++){
        if(ht.find(j) == ht.end()) return j;
        j++;
    }
}

int main(){
    vector<int> arr = {9,6,4,2,3,5,7,0,1};
    cout<<numb(arr);
    
}