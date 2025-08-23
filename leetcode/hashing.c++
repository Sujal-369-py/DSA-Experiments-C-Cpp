#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twosum(vector<int> &arr,int target)
{
   unordered_map<int,int> mp;
   int len = arr.size();
   for(int i=0; i<len; i++)
   {
      int component = target-arr[i];
      if(mp.find(component) != mp.end())
      {
         return {mp[component],i};
      }
      mp[arr[i]] = i;
   }
   return {};
}

int main()
{
   vector<int> arr = {};
   twosum(arr,7);
}
    