#include<iostream>
using namespace std;

int main()
{
       int num = 124;
       int palli = 0;
        int original_num = num;
        while(num > 0)
        {
            int r = num%10;
            cout<<r<<endl;
            palli = palli*10 + r;
            num/=10;
        }
        cout<<palli;
        if(palli == original_num)
        {
            cout<<"yes";
            return true;
        }
        return false;
}