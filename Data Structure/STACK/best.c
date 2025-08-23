#include<stdio.h> 

int push(int stack[], int i, int size, int value)
{
    if(i == (size-1))
    {
        return -1;
    }
    else 
    {
        stack[++i] = value;
    }
    return i;
}
int pop(int stack[], int i)
{
    if(i == -1)
    {
        return -1;
    }
    else 
    {
        i = i - 1;
    }
    return i;
}

int peek(int stack[], int i)
{
    if (i == -1)
    {
        return -1;  
    }
    return stack[i];
}

int main()
{
    int stack[3], i = -1, size = 3, choice, value, result; 
    do 
    {
        printf("\n\n1 for push\n2 for pop\n3 for peek\n4 for exit\nYour choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter a value: ");
            scanf("%d", &value);
            result = push(stack, i, size, value);
            if(result == -1)
            {
                printf("\n\nstack is full");
            }
            else 
            {
                i = result;
            }
        }
        else if(choice == 2)
        {
            result = pop(stack, i);
            if(result == -1)
            {
                printf("\n\n stack is empty");
            }
            else 
            {
                i = result;
            }
        }
        else if(choice == 3)
        {
             result = peek(stack, i);
            if (result == -1)
            {
                printf("\n\n stack is empty");
                
            }
            else 
            {
                printf("%d is the topmost element", result);
            }
        }
        else if(choice == 4)
        {
            break;
        }
        else
        {
            printf("\nWrong input");
        }
    } while(choice != 4);

    return 0;
}
