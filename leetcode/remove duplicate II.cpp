#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {0,0,1,1,1,1,2,2,3};
    int j=0,i;
    for(i=1; i < arr.size(); i++)
    {
        if(arr[i-1] == arr[i])
        {
            if(i >= 2 && arr[i-1-1] == arr[i-1])
            {
                continue;
            }
            j++;
        }
        else 
        {
            j++;
        }
        arr[j] = arr[i];
    }

        for(int i=0; i<j+1; i++)
        {
            cout<<arr[i]<<" ";
        }
}