#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>arr = {1,2,3,4,5,6,7};
    int k=3;
        int pos,div = arr.size();

            reverse(arr.begin(),arr.end());
            reverse(arr.begin(),arr.begin()+k);
            reverse(arr.begin()+k,arr.end());

        for(int i=0; i<arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }
}