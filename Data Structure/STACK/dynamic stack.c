#include<stdio.h>
#include<stdlib.h>

struct stack 
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;
struct stack *temp;

int push(int value)
{
    if(top == NULL)
    {
        top = (struct stack *)malloc(sizeof(struct stack));
        top->data = value;
        top->next = NULL;
    }
    else 
    {
        temp = (struct stack *)malloc(sizeof(struct stack));
        if(temp != NULL)
        {
            temp->data = value;
            temp->next = top;
            top = temp;
        }
    }
    return value;
}

int pop()
{
    if(top == NULL)
    {
        return -1;
    }
    else 
    {
        int back =  top->data;
        top = top->next;
        free(temp);
        return back;
    }
}

int peek()
{
     if(top == NULL)
    {
        return -1;
    }
    else 
    {
        return top->data;
    }
}

int main()
{
    int choice, get,val;

    while(1)
    {
        printf("\n enter your choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            printf("Enter a value : ");
            scanf("%d",&val);
            get = push(val);
            printf("\n%d is pushed",get);
        }
        else if(choice == 2)
        {
            get = pop();
            if(get == -1)
            {
                printf("\nStack is empty");
            }
            else 
            {
                printf("\n%d is poped",get);
            }
        }
        else if(choice == 3)
        {
            get = peek();
            if(get == -1)
            {
                printf("\nStack is empty");
            }
            else 
            {
                printf("\n%d is Top element",get);
            }
        }
        else if(choice == 4)
        {
            break;
        }
        else 
        {
            printf("\n wrong input");
        }
    }
}