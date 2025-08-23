#include<stdio.h> 
int que[5],front = -1, rear = -1,value,count=0;

void push()
{
    if(count == 5)
    {
        printf("\nQueues is full");
    }
    else 
    {
        if(front== -1)
        {
            front =0;
        }
        rear%=5;
        printf("\nEnter a value : ");
        scanf("%d",&value); 
        que[++rear] = value;
        count++;
    }
}

void pop()
{
    if(count == 0)
    {
        printf("\n Queues is empty");
    }
    else 
    {
        printf("\n%d is poped",que[front]);
        front = (front)%5;
        ++front;
        count--;
        if(count == 0)
        {
            front = -1; 
            rear = -1;
        }
    }
}

void peek()
{
    if(count == 0)
    {
        printf("\n Queues is empty");
    }
    else 
    {
        printf("\n Top element is : %d",que[front]);
    }
}

int main()
{
      int choice;
    while(1)
    {
        printf("\n1 for push\n2 for pop\n3 for peek\n4 for exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                return 0;
            default:
                printf("\nWrong input! Please try again.\n");
        }
    }
}