#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr ={9,9};
        int n = arr.size()-1;
        int carry=0;
        for(int i=n; i>=0; i--)
        {
            if(i==n || carry == 1)
            {
            if(arr[i] == 9)
            {
                arr[i] = 0;
                carry = 1;
                cout<<arr[i]<<endl;
            }
            else if(carry == 1)
            {
                arr[i]+=carry;
                carry--;
            }
            else 
            {
            arr[i]+=1;
            }
            }
            else 
            {
                continue;
            }
        }
        if(carry == 1)
        {
            arr.insert(arr.begin(),1);
        }
        for(int i=0; i<arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }
        
}