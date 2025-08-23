#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,int> ht;
    ht[3] = 1;
    ht[6] = 2;
    ht[9] = 3;
    ht[369] = 4;
    
    ht.erase(3);
    cout<<endl;

    for(auto &i:ht){
        cout<<i.first<<":"<<i.second<<endl;
    }
}