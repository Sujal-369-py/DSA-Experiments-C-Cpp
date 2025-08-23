#include<iostream>
#include<unordered_map>
#include<string>
#include <sstream>
#include<vector>
using namespace std;

int main()
{
    string p = "abba";
    string s = "dog cat dog cat";
   stringstream ss(s);
   vector<string> words;
   string word;
   while(ss >> word) 
   {
        words.push_back(word);
   }
    unordered_map<char,string> ht;
    int n = p.length();
    int i=0,j=0;
    for(int i=0; i<p.length(); i++)
    {
        if(ht.find(p[i]) != ht.end())
        {
            if(ht[p[i]] == words[j])
            {
                j++;
                continue;
            } 
            else return false;
        }
        ht[p[i]] = words[j];
        j++;
    }
    cout<<"Founded";
    for(auto &i:ht)
    {
        cout<<i.first<<"  : "<<i.second<<endl;
    }
    return true;
}