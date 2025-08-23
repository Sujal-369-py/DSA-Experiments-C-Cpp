#include<stdio.h> 

void display(int i)
{
    if(i<=5)
    {
        display(i+3);
        display(i+4);

        printf("%d ",i);
    }
}

int main()
{
    display(1);
}