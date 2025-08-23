#include<stdio.h>
#include<stdlib.h>

struct que 
{
    int data;
    int *next;
};
struct que *front = NULL;
struct que *rear = NULL;
struct que *temp;

int push(int value)
{
    if(rear == NULL)
    {
        rear = (struct que *)malloc(sizeof(struct que));
        rear->data = value;
        rear->next = NULL;
        front = rear;
    }
    else 
    {
        temp = (struct que *)malloc(sizeof(struct que));
        if(temp != NULL)
        {
            temp->data = value;
            temp->next = NULL;
            rear->next = temp;
            rear = temp;
        }
    }
    return value;
}

int pop()
{
    if(front == NULL)
    {
        return -1;
    }
    else 
    {
        int p_data = front->data;
        temp = front;
        front = front->next;
        free(temp);
        if(front == NULL)
        {
            rear = NULL;
        }
        return p_data;
    }
}

int peek()
{
    if(front == NULL)
    {
        return -1;
    }
    else 
    {
        return front->data;
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
                printf("\nQueues is empty");
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
                printf("\nQueues is empty");
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