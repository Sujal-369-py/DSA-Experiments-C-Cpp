#include<iostream>
using namespace std;
class Solution {
public:
    void merge(int num1[],int num2[],int m,int n) 
    {
        int i=0,j=0,k=0,arr[m+n];
        while(i<m && j<n)
        {
            if(num1[i] < num2[j])
            {
                arr[k] = num1[i];
                i++;
            }
            else 
            {
                arr[k] = num2[j];
                j++;
            }
            k++;
        }
        while(i<m || j<n)
        {
            if(i<m)
            {
                arr[k] = num1[i];
                i++;
            }
            else 
            {
                arr[k] = num2[j];
                j++;
            }
            k++;
        }
        for(int i=0; i<6; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    int arr1[] = {1,2,3,0,0,0},arr2[] = {2,5,6},m=3,n=3;
    Solution sl;
    sl.merge(arr1,arr2,m,n);
}