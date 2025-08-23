#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    vector<int> arr = {3,1,2,4,5,8,7,6,9};
    int r = arr.size()-1,l=0,len,area,bre,lar = numeric_limits<int>::min();

    while(l<r)
    {
        len = arr[l] <= arr[r] ? arr[l] : arr[r];
        bre = r-l;
        area = len*bre;
        lar = area > lar? area:lar;
        if(arr[l] < arr[r])
        {
            l++;
        }
        else 
        {
            r--;
        }
    }
    return lar;

}