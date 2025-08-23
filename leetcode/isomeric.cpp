#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main()
{
    string s="foo",t="bar";
     unordered_map<char,char>ht;
        int n = s.length();
        int i=0,j=0;
        while(i < n)
        {
           if(ht.find(s[i]) != ht.end())
           {
            auto it = ht.find(s[i]);
                if(it->second == t[j])
                {
                    i++;j++;
                }
                else 
                {
                    cout<<"wrong";
                    return false;
                }
           }
            else 
            {
               ht[s[i]] = t[j];
               i++;j++;
            }
        }
        cout<<"corect";
        return true;
}