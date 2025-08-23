#include<stdio.h> 
#include <stdlib.h>
struct stack 
{
    int data;
    struct stack * next;
};
struct stack *start = NULL;
struct stack *temp;

void push()
{
    int val;
    if(start == NULL)
    {
        start = (struct stack*)malloc(sizeof(struct stack));
        printf("Enter value : ");
        scanf("%d",&val); 
        start->data = val;
        start ->next = NULL;
    }
    else 
    {
        temp = (struct stack*)malloc(sizeof(struct stack));
        printf("Enter value : ");
        scanf("%d",&val);
        temp->data = val;
        temp->next = start;
        start = temp;
    }
}


int pop()
{
    if(start == NULL)
    {
        return -1;
    }
    else 
    {
        int val = start->data;
        start = start->next;
        free(temp);
        return val;
    }
}


int peek()
{
    if(start == NULL)
    {
        return -1;
    }
    else 
    {
        return start->data;
    }
}


int main()
{
    int choice,res; 
    while(1)
    {
        printf("\n1 for push \n2 for pop\n3 for peek \nEnter Your Choice : ");
        scanf("%d",&choice); 

        if(choice == 1)
        {
            push();
        }
        else if(choice == 2)
        {
           res =  pop();
           if(res == -1)
           {
            printf("\n stack is empty\n");
           }
           else 
           {
            printf("%d is poped\n",res);
           }
        }
          else if (choice == 3)
        {
            res = peek();
            if (res == -1)
            {
                printf("\n Stack is empty\n");
            }
            else 
            {
                printf("\n%d is top of stack\n", res);
            }
        }
        else 
        {
            printf("Invalid choice. Try again.\n");
        }
    }
}