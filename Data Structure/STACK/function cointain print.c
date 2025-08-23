#include<stdio.h> 

int push(int stack[], int i, int size, int value)
{
    if(i == (size-1))
    {
        printf("\nStack is Full\n");
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
        printf("\nStack is empty\n");
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
        printf("\nStack is empty\n");
        return -1;  // Return an invalid value to indicate error
    }
    return stack[i];
}

int main()
{
    int stack[3], i = -1, size = 3, choice, value; 
    do 
    {
        printf("\n\n1 for push\n2 for pop\n3 for peek\n4 for exit\nYour choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter a value: ");
            scanf("%d", &value);
            i = push(stack, i, size, value);
        }
        else if(choice == 2)
        {
            printf("%d is removed",stack[i]);
            i = pop(stack, i);
            
        }
        else if(choice == 3)
        {
            int top = peek(stack, i);
            if (top != -1)
            {
                printf("%d is the topmost element", top);
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
