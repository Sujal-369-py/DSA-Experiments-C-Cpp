#include<stdio.h>

void display(int i){
    if (i <=5)
     {
    display(i+1);
    display(i+2);
    printf("%d\t",i);
    }
}

int main()
{
  display(1);
}