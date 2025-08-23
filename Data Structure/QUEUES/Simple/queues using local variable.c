#include<stdio.h> 

int push(int que[], int rear, int *front, int value)
{
    if(rear == 4)
    {
        return -1;
    }
    else 
    {
        if((*front) == -1)
        {
            (*front) = 0;
        }
        que[++rear] = value;
    }
    return rear;
}


int pop(int que[], int rear, int *front)
{
    int p;
    if((*front) == -1 || (*front) > rear)
    {
        return -1;
    }
    else 
    {
        p = que[(*front)];
        (*front)+=1; 
        return p;
    }
}

int peek(int que[], int rear, int front)
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
    int que[5],front=-1, rear = -1, value, choice,res;
    while(1)
    {
        printf("\n1 for push\n2 for pop\n3 for peek\n4 for exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1: 
            if(rear == 4)
            {
                printf("\nQueues is full");
            }
            else 
            {
                printf("\nEnter the value : ");
                scanf("%d",&value);
                rear = push(que,rear,&front,value);
                printf("\n%d is pushed",value);
            }
            break;

            case 2: 
            res = pop(que,rear,&front);
            if(res == -1)
            {
                printf("\nQueues is empty");
            }
            else 
            {
                printf("%d is poped",res);
            }
            break;

            case 3: 
            res = peek(que,rear,front);
            if(res == -1)
            {
                printf("Queues is empty ");
            }
            else 
            {
                printf("\nTop of Queues : %d",res);
            }
            break;

            case 4: 
            return 0;

            default:
            printf("\nWrong input! try again");
        }
    }
}