#include<stdio.h> 

int push(char stack[], int i, char brack)
{
    stack[i] = brack;
    return i+1;
}

int pop(char stack[], int i, char brack)
{
    i--; 
    if(i==-1)
    {
        return -1;
    }
    if((stack[i] == '(' && brack == ')') ||
        (stack[i] == '[' && brack == ']') ||
        (stack[i] == '{' && brack == '}')) 
        {
             return i;
        }
        else 
        {
            return -1;
        }
}

int main()
{
    char str[20],stack[100]; 
    printf("Enter bracket : ");
    gets(str);
    int i = 0;
    
    for(int j = 0; str[j]; j++)
    {
        if(str[j] == '(' || str[j] == '[' || str[j] == '{')
        {
            i = push(stack, i, str[j]);
        }
        else if(str[j] == ')' || str[j] == ']' || str[j] == '}')
        {
            i = pop(stack, i, str[j]);
            if(i ==-1)
            {
                break;
            }
        }
    }

    if(i == 0)
    {
        printf("Bracket matched");

    }
    else 
    {
        printf("Nracket do not matched ");
    }
}