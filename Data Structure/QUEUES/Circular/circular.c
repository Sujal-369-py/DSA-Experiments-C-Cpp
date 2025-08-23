#include<stdio.h>

int push(int que[], int *front, int *rear, int val, int size,int *count)
{
    if(*count == size)
    {
        return -1;
    }
    else 
    {
        if(*front == -1)
        {
            (*front) = 0;
        }
        que[++(*rear)] = val;
        (*count)++;
    }
    return (*rear);
}

int pop(int que[], int *front, int *count,int *rear)
{
    if(*count == 0)
    {
        return -1;
    }
    else 
    {
        int temp = que[*front];
        (*front)++;
        (*count)--;
        if(count==0)
        {
            *front = -1;
            *rear = -1;
        }
        return temp;
    }
}

int peek(int que[], int front, int count)
{
    if(count == 0)
    {
        return -1;
    }
    else 
    {
        return que[front];
    }
}

int main()
{
    int que[5],f=-1,r=-1,count=0,value,choice,call,size = 5;

    while(1)
    {
        printf("\n Enter the number : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            if(count == size)
            {
                printf("\nQueues is full");
            }
            else 
            {
                printf("Enter value : ");
                scanf("%d",&value);
                call = push(que,&f,&r,value,size,&count);
                printf("%d is pushed ",value);
            }
        }
        else if(choice == 2)
        {
            call = pop(que,&f,&count,&r);
            if(call == -1)
            {
                printf("\nQueues is empty");
            }
            else 
            {
                printf("%d is poped",call);
            }
        }
        else if(choice == 3)
        {
            call = peek(que,f,count);
            if(call == -1)
            {
                printf("\nQueues is empty");
            }
            else 
            {
                printf("%d is top element ",call);
            }
        }
        else if(choice == 4)
        {
            break;
        }
        else 
        {
            printf("\nwrong input");
        }
    }
}