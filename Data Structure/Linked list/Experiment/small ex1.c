#include<stdio.h>

int hello(int count)
{
    int back = 6;
    printf("Hello owled");
    return count;
}

int main()
{
    int count = 0,choice;
    while(1)
    {
        printf("choice : ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            count = hello(count);
            printf("\n%d\n",count);
        }
    }
}