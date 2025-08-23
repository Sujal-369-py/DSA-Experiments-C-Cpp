#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n;
    cout<<"Number of elements you want to add :";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\n Normal array : \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
    cout<<"\n Reversed array : \n";
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<"\n";
    }
}