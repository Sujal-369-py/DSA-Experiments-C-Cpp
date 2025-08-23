#include<stdio.h>
#include<stdlib.h>

struct que 
{
    int data;
    int priority;
    struct que *next;
};
struct que *front = NULL;
struct que *rear = NULL;
struct que *temp;



int push(int val,int pri)
{
    if(front == NULL)
    {
        front = (struct que *)malloc(sizeof(struct que));
        front->data = val;
        front->priority = pri;
        front->next = NULL;
        rear = front;
    }
    else 
    {
        temp = (struct que *)malloc(sizeof(struct que));

        if(temp != NULL)
        {
            temp->data = val;
            temp->priority = pri;
            temp->next = NULL;
            rear = temp;
            
            struct que *search = front;
            struct que *sl = NULL;

            if(rear->priority < temp->priority)
            {
                rear->next = temp;
                rear = temp;
            }

            while(temp->priority > search->priority &&search->next != NULL)
            {
                sl = search;
                search = search->next;
            }
            if(sl != NULL)
            {
                temp->next = sl->next;
                sl->next = temp;
            }
            else 
            {
                temp->next = front;
                front = temp;
            }
        }
    }
    return rear->data;
}

int pop()
{
    if(front == NULL)
    {
        return -1;
    }
    else 
    {
        int back = front->data;
        temp = front;
        front = front->next;
        free(temp);
        if(front == NULL)
        {
            rear = NULL;
        }
        return back;
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
     int choice, get,val,p;

    while(1)
    {
        printf("\n enter your choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            printf("Enter a value : ");
            scanf("%d",&val);
            printf("Enter priority : ");
            scanf("%d",&p);
            get = push(val,p);
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