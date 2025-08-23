#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    vector<int> arr = {12,-1,-7,8,-15,30,18,28};
    int k=3,found = 0,j=0;
    queue<int> que;
    for(int i=0; i<k; i++){
        if(arr[i] < 0 && found == 0){
            cout<<arr[i]<<" ";
            found = 1;
            que.push(arr[i]);
        }
        else if(arr[i] < 0 && found == 1){
            que.push(arr[i]);
        }
    }
    for(int i=k; i<arr.size(); i++){
        if(que.empty()){
            cout<<"0"<<" ";
        }
        else if(arr[i+1-k] == que.front()){
            cout<<que.front()<<" ";
            que.pop();
        }
        else cout<<que.front();
        if(arr[i] < 0) que.push(arr[i]);
    }
}


