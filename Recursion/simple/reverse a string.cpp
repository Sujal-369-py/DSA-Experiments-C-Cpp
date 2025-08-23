#include<iostream>
using namespace std;

void rev(string &s,int size,int i)
{
   if(i == (size/2)) return;
   char ch = s[i];
   s[i] = s[size-1-i];
   s[size-1-i] = ch;
   rev(s,size,i+1);
}

int main()
{
    string s = "hell";
    rev(s,4,0);
    cout<<s;
}