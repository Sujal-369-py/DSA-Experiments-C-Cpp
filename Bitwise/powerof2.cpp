#include<iostream>
using namespace std;

int powerof2(int n)
{
    if(n & (n-1) == 0) return true;
    else false;
}