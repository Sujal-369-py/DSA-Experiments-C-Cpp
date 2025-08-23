#include<iostream>
using namespace std;
int main()
{
    int arr[] = { 1,2,3,4,5,6};
    int n;
    bool found = false;
    cout<<"Enter the number you want to find : ";
    cin>>n;
    for(int i=0; i<6; i++){
        if(arr[i] == n){
            found = true;
            break;
        }
    }
    if(found){
        cout<<"Number founded ";
    }
    else{
        cout<<"Number not found";
    }
}