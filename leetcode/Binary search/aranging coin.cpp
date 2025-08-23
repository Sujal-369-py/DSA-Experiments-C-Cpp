#include<iostream>
#include<vector>
using namespace std;

int coin(int n){
    if(n == 1)return 1;
    int l=1,h = n,mid;

    while(l <= h){
        mid = (l+h)/2;
        float formula = mid/2.0*(mid+1);
        if(formula == n) return mid;
        else if(formula > n) h = mid-1;
        else l = mid+1;
    }
    return h;
   
}

int main()
{
    cout<<coin(22);
}

