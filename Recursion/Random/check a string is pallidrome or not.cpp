#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "car";
    int i=0,j=str.length()-1;
    
    while(i < j)
    {
        if(str[i] != str[j])
        {
           cout<<"String is not aplliderome";
           return 1;
        }
        i++;
        j--;
    }
    cout<<"String is pallidome";
}