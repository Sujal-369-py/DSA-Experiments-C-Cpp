#include<iostream>
#include<unordered_map>
#include<string>
#include <sstream>
#include<vector>
using namespace std;

int main()
{
    string s = "anagram";
    string t = "nagaram";
    unordered_map<char,int> ht;
        if(s.length() != t.length()) return false;

        for(auto &i:s)
        {
            ht[i]++;
        }
        for(auto &i:ht)
        {
           cout<<i.first<<"  "<<i.second<<endl;
        }
        for(int i=0; t[i]; i++)
        {
            ht[t[i]]--;
        }
        for(auto &i:ht)
        {
           if(i.second < 0) return false;
        }
        for(auto &i:ht)
        {
           cout<<i.first<<"  "<<i.second<<endl;
        }
        return true;
}