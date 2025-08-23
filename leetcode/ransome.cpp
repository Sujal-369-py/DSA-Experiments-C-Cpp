#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main()
{
    string ran = "aa",mag = "ab";
    unordered_map<char,int> ht;
        for(auto &i:mag)
        {
            ht[i]++;
        }
        for(auto &j:ran)
        {
            if(ht.find(j) == ht.end())
            {
               cout<<"wrong";
               return false;
            }
            cout<<"value = "<<ht[j]<<endl;
            ht[j]--;
        }
        cout<<"Correct";
       return true;
}