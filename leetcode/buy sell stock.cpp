#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {7,1,5,3,6,4};
    int min = arr[0],profit = 0;
    for(int i=0; i<arr.size(); i++)
        {
            cout<<"min  :    "<<min;
            cout<<"      profit : "<<profit<<endl;
            if(arr[i] < min)
            {
                min = arr[i];
            }
            if(profit <  (arr[i] - min))
            {
                profit = arr[i]-min;
            }
        }
}