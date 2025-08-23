#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;

int main()
{
    unordered_map<char,int> ht;
    string s = "pwwkew";
    int l=0,m=0;

    for(int h=0; h < s.length(); h++){
       if(ht.find(s[h]) != ht.end() && ht[s[h]] >= l){
        l = ht[s[h]] + 1;
       }
       ht[s[h]] = h;
       m = max(m,h - l+1);
    }
    cout<<m;
}