#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    int sum = 0;
    
    for(auto &num:arr)
    {
        sum+=num;
    }
    cout<<"Sum of array : "<<sum;
}