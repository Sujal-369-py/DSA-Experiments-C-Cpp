#include<iostream>
using namespace std;

int main()
{
    int n = 884,ans=0,og = n;

    while(n > 0){
        int rem = n%10;
        ans+= (rem*rem*rem);
        n/=10;
    }
    if(ans == og) cout<<"yes it is";
    else cout<<"Nope";
}