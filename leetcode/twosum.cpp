#include<iostream> 
#include<tuple>
using namespace std; 

tuple<int,int> Twosum(int arr[],int target)
{
    int size = 4;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]+arr[j] == target)
            {
                return make_tuple(i,j);
            }
        }
    }
    return make_tuple(-1,-1);
}

int main()
{
    int arr[] = {2,7,11,15},target = 9,*l = arr,*r = &arr[(sizeof(arr)/sizeof(arr[0])) - 1];
    // while(l < r)
    // {
    //     int sum = (*l) + (*r);
    //     if(sum == target)
    //     {
    //         cout<<"Found\n"; 
    //         break; 
    //     } 
    //     else if(sum > target)
    //     {
    //         --(r);
    //     }
    //     else
    //     {
    //         ++(l);
    //     }
    // }
    // if(l >= r)
    // {
    //     cout<<"not found";
    // }
        auto res = Twosum(arr,target);
        int i = get<0>(res);
        int j = get<1>(res);
        cout<<i<<"      "<<j;
    return 0;
}