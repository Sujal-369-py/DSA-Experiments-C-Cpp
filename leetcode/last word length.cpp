#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s = "Hello world ";
    int i = s.length()-1,count=0;
    for(i;i>=0; i--)
    {
        if(s[i] == ' ' && count == 0)
        {
            continue;
        }
        if(s[i] == ' ' && count != 0)
        {
            cout<<count;
            return false;
        }
        count++;
    }
}