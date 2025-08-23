#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main()
{
        unsigned long long int n=20;
        int fact = tgamma(n+1);
        cout<<"factorial : "<<fact;
        string str = to_string(fact);
        int len = str.length()-1,count=0;
        for(int i=len; i>=0;i--)
        {
            if(str[i] == '0')
            {
                count++;
            }
            else 
            {
                break;
            }
        }
        cout<<endl<<count;
        return count;
}