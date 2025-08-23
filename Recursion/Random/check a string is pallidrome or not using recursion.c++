#include<iostream>
#include<string>
using namespace std;

int match(string str,int i,int j)
{
    if(i <= j)
    {
       return 1;
    }
     if(str[i] != str[j])
    {
        return -1;
    }
    return match(str,i+1,j-1);
}

int main()
{
    string str = "racecar";
    int i=0,j = str.length()-1;
    int call = match(str,i,j);
    if(call == 1)
    {
        cout<<"Pallidrome";
    }
    else 
    {
        cout<<"Not pallidrome";
    }

}