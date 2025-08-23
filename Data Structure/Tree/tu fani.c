#include<stdio.h>

int main()
{
   double fact = 3;
    for(int i=1; i<fact; i++)
    {
        fact *= i;
    }
    printf("factorial of number : %d",fact);
}