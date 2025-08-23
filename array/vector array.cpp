#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector<int> arr = {0,1,2,2,3,0,4,2};
    int val = 2,k=arr.size(),i=0,j=0;

    //INSERTION.............

    //insert at end
    // arr.push_back(7);
    // arr.push_back(8);
    // //at specific position (arr.begin() = 0th position)
    // arr.insert(arr.begin(),0);
    // arr.insert(arr.begin()+2,369);
    //END...........

    //DELETE..........

    // arr.pop_back(); // remove last elemnt
    // arr.erase(arr.begin()+2); //erase(the index)
    // arr.erase(arr.begin(),arr.begin() + 3); //in a range


    while(i < arr.size())
    {
        if(arr[i] == val)
        {
            if(arr[j] == val)
            {
                
            }
            else 
            {
                j = i;
            }
            k--;
        }
        else 
        {
            arr[j++] = arr[i];
        }
        i++;
    }

    for(int i=0; i<k; i++)
    {
        cout<<arr[i]<<" ";
    }
}