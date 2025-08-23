#include<stdio.h>

int push(int stack[], int i, int size, int value)
{
    stack[++i] = value;  // Increment index and add the value
    return i;  // Return updated index
}

int pop(int stack[], int *i)
{
    int v;
    if((*i) == -1)  // Stack is empty
    {
        return -1;  // Indicate that the stack is empty
    }
    else 
    {
        v = stack[*i];
        (*i)--;  
        return v; 
    }
    
}

int peek(int stack[], int i)
{
    if (i == -1)  
    {
        return -1;  
    }
    else 
    {
        return stack[i];
    } 
}

int main()
{
    int stack[3], i = -1, size = 3, choice, value, result; 
    do 
    {
        printf("\n\n1 for push\n2 for pop\n3 for peek\n4 for exit\nYour choice: ");
        scanf("%d", &choice);

        if(choice == 1)  // Push
        {
            if(i == size-1)
            {
                printf("\n\nStack is full");
            }
            else 
            {
            printf("Enter a value: ");
            scanf("%d", &value);
            result = push(stack, i, size, value);
            i = result; 
            printf("\n%d pushed to stack", value);
            }
        }
        else if(choice == 2)
        {
            result = pop(stack,&i);
            if(result == -1)
            {
                printf("\n\nStack is empty");
            }
            else 
            {
                printf("\n%d is popped", result);  
            }
        }
        else if(choice == 3)  
        {
            result = peek(stack, i);
            if (result == -1)
            {
                printf("\n\nStack is empty");
            }
            else 
            {
                printf("\n%d is the top value", result);  
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
