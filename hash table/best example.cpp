#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {1,2,3,1,1,3};
    int count=0;
        unordered_map<int,int> ht;
        for(auto &i:nums)
        {
           ht[i]++;
        }
        for(auto &i:ht)
        {
            cout<<i.first<<" :  "<<i.second<<endl;
        }
}