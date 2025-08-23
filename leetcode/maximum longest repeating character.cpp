#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int,int>ht;
    string s = "aababba";
    int k=2,og=k,l=0,h=0,count=0,m=0;
    while(h < s.length()){
        if(s[l] == s[h]){
            h++;count++;ht[s[h]]++;
        }
        else if(s[l] != s[h] && k!=0){
            h++;count++;ht[s[h]]++;
        }
        else{
            count = 0;k=og;ht[s[l]]--;ht[s[h]]++;
            l++;
            if(ht.find(s[l]) != ht.end()){
                count+=ht[s[l]];
                k-=ht[s[h]];
                if(k == 0) k = og;
            }
        }
        m = max(m,count);
    }
    cout<<m;
}