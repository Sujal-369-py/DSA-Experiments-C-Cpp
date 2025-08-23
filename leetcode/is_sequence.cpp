#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "axc",t = "ahbgdc";
     int ss = 0,tt = 0;
        int end_condition = t.length();
        while(tt < end_condition)
        {
            cout<<s[ss]<<"--------"<<t[tt]<<endl;
            if(s[ss] == t[tt])
            {
                ss++;tt++;
            }
            else 
            {
                tt++;
            }
        }
        if(ss == s.length())
        {
            cout<<"yes";
            return true;
        }
        else 
        {
            cout<<"no";
            return false;
        }
}