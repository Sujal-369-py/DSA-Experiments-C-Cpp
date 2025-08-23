#include<iostream>
using namespace std;

int main()
{
    int *arr1 = new int[3] {1,2,3};

    // Time passes and i need 5 space
    int *arr2 = new int[5];
    for(int i=0; i<3; i++)
    {
        arr2[i] = arr1[i];
    }
    arr2[3] = 4;
    arr2[4] = 5;

    delete[] arr1;

    arr1 = arr2;

    for(int i=0; i<5; i++)
    {
        cout<<arr1[i]<<" ";
    }
    delete[] arr1;
    arr2 = nullptr;
}