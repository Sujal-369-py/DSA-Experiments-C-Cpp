#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> arr ={
        {1, 3, 5, 7}, 
        {10, 11, 16, 20}, 
        {23, 30, 34, 60}
    };
    int target = 7;
    int col = arr.empty() ? 0:arr[0].size();
    int h = col*arr.size()-1,l=0,mid;

    while(l <= h)
    {
        mid = (l+h)/2;
        int i=mid/col,j = mid%col;
        if(arr[i][j] == target)
        {
            return false;
        }
        else if(arr[i][j] > target)
        {
            h = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<<"Not found";

    
}