#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {2,3,1,1,4};
    int i=0,n = arr.size()-1;
    while(i <= n)
    {
        if(arr[i] == 0)
        {
            return false;
        }
        else if(i+arr[i] == n)
        {
            i+=arr[i];
            return true;
        }
        else 
        {
            i+=1;
        }
    }
}