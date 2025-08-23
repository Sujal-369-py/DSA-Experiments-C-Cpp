#include<iostream>
#include<stack>
using namespace std;

int *res(int arr[],int n)
{
    stack <int> st;
    int *res = new int[n];
     for(int i=n-1; i>=0; i--)
    {
        while(!st.empty() && arr[i] > st.top())
        {
            st.pop();
        }
        if(st.empty())
        {
            res[i] = -1;
        }
        else 
        {
            res[i] = st.top();
        }
        st.push(arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {6,0,8,1,3};
    int *call = res(arr,5);
    for(int i=0; i<5; i++)
    {
        cout<<call[i]<<" ";
    }
    cout<<endl;

}