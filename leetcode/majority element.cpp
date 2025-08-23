#include <iostream>
#include <vector> 
#include <climits> 
#include<unordered_map> 

using namespace std;

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    unordered_map<int,int>fre;

    for (int i = 0; i < arr.size(); i++)
    {
        fre[arr[i]]++;
    }

    int largest = INT_MIN, l = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if(fre[arr[i]] > largest)
        {
            largest = fre[arr[i]];
            l = arr[i];
        }
    }

    cout << "boom answer : " << l << endl;
}
