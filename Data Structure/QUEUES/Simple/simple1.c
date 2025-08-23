#include<stdio.h>

int push(int que[], int *front, int *rear , int value,int size)
{
      if (*rear == size - 1) {
        // Queue is full
        return -1;
    } 
    else
     {
        if (*front == -1) 
        {
            // Queue was empty, set front to 0
            *front = 0;
        }
        (*rear)++;
        que[*rear] = value;
        return *rear;
    }
}

int pop(int que[],int *front,int *rear)
{
    if((*front) == -1 || *front > *rear)
    {
        return -1;
    }
    else 
    {
        int a = que[(*front)];
        (*front)+=1;
        return a;
    }
}

int peek(int que[],int front,int rear)
{
    if(front == -1 || front > rear)
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
    int que[5], f=-1,r=-1,size = 5, choice,call,value;

    while(9)
    {
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            if(r == size-1)
            {
                printf("\n queues is full");
            }
            else 
            {
                printf("Enter trhe value : ");
                scanf("%d",&value);
                call = push(que,&f,&r,value,size);
                printf("%d is pushed into queues",value);
            }
        }
        else if(choice == 2)
        {
            call = pop(que,&f,&r);
            if(call == -1)
            {
                printf("\n Queues is empty");
            }
            else 
            {
                printf("%d is poped",call);
            }
        }
        else if(choice == 3)
        {
            call = peek(que,f,r);
            if(call == -1)
            {
                printf("\n Queues is empty");
            }
            else 
            {
                printf("%d is top element",call);
            }
        }
        else if(choice == 4)
        {
            break;
        }
        else 
        {
            printf("\nWrong output");
        }
    }
}