#include<iostream>
using namespace std;

int* rev(string &s,int size,int i,int j,string ss)
{
    if(s[i] == size) return;
    rev(s,size,i+1,j-1,ss);
    ss[j] = s[i];
    return ss;
}

int main()
{
    string s = "hell";
    int *a = rev(s,4,0,3);
}