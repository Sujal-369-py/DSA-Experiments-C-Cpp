#include<stdio.h> 

void reverse(char str[100], int i)
{
    if(str[i] == '\0')
    {
        reverse(i+1,1);

    }
}