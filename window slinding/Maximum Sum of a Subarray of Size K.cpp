#include<iostream>
#include<vector>
#include<climits>

// void Maximun_sum(vector<int> ar,int sub)
{
    for(int i=0; i<sub; i++)
    {
        sum+=arr[i];
    }
    max_sum = sum;
    for(int i=sub; i<arr.size(); i++)
    {
        sum+= arr[i] - arr[i - sub];
        max_sum = max(max_sum,sum);
    }
}
using namespace std;

int main()
{
    vector<int> arr = {4, -1, 2, -6, 5, 3, -2, 8, -7, 6};
    int sub=3,sum=0,max_sum = INT_MIN;

    cout<<"Sum is : "<<max_sum;
}