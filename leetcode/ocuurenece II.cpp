#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
    vector<int> arr = {1,2,3,1,2,3};
    int k=2;
     unordered_map<int, pair<int,int>> ht;
        for(int i=0; i<arr.size(); i++)
        {
            if(ht.find(arr[i]) == ht.end()) ht[arr[i]] = {i,1};
            else 
            {
                ht[arr[i]].first = abs(ht[arr[i]].first - i);
                ht[arr[i]].second++;
            }
        }
        for (auto &i : ht)
        {
            cout << i.first << " : (" << i.second.first << ", " << i.second.second << ")" << endl;
        }

        for(auto &i:ht)
        {
            if(i.second.second >= 2 && i.second.first == k)
            {
                return true;
            }
        }
        return false;
}