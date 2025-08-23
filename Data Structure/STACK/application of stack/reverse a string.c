#include<stdio.h> 

int push(char stack[], int i, char ch)
{
    stack[i] = ch;
    return i+1;
}

int pop(char stack[], int i)
{
    i--;
    int v = stack[i];
    return v;
}

int main()
{
    char str[50],stack[60]; 
    int i = 0;
    printf("Enter a string : ");
    gets(str);
    for(int j =0; str[i]; j++)
    {
        if(str[i] != '\0')
        {
            i = push(stack,i,str[j]);
        }
    }
    while(i > 0)
    {
        printf("%c",pop(stack,i));
        i--;
    }
}