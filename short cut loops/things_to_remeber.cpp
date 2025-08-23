#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    int sum = 0;
    
    for(const auto &num:arr) //avoid extra copies so we willl use (const auto var_name:arr_name);
    {
        sum+=num;
    }
    cout<<"Sum of array : "<<sum;
}