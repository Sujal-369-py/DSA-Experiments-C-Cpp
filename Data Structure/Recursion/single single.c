#include<stdio.h> 

void display(int i)
{
    if(i<1)
    {
        return;
    }
    else 
    {
        printf("%d ",i);
        display(i-1);
        printf("%d ",i);
    }
}

int main()
{
    display(3);
}