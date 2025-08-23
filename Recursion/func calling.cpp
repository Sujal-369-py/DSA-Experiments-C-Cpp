#include<iostream>
#include<vector>
using namespace std;

int* sort(vector<int> arr){
    vector<int> arr2 = arr;
    cout<<int(&arr)<<endl;
    cout<<int(&arr2)<<endl;
    int a[] = {10,11,12};
    int *b = a;
    cout<<int(a)<<endl;
    cout<<int(b)<<endl;
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    int *temp = sort(arr);
}