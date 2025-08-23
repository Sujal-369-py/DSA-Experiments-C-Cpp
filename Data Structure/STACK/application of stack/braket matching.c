#include<stdio.h> 

int push(char bracket[], int i, char brack)
{
    bracket[i] = brack;
    return i+1;
}
int pop(int i)
{
    i--;
    if(i == -1)
    {
        return -1;
    }
    return i;
}

int main()
{
    char st[] = "()";

    int i = 0;
    char stack[sizeof(st)];

    for(int j = 0; j < (sizeof(st)); j++)
    {
        if(i>=0)
        {
            if(st[j] == '(' || st[j] == '{' || st[j] == '[')
       {
        i = push(stack,i,st[j]);
       }
        }
       else if(st[j] == ')' || st[j] == '}' || st[j] == ']')
       {
        i = pop(i);
       }
    }
    if(i==0)
    {
        printf("\nBracket matched");
    }
    else
    {
        printf("\nBracket do not matched");
    }

}

