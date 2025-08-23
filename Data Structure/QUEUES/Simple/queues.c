#include<stdio.h> 

int front = -1, rear = -1, que[5];

void push()
{
    int value;
    if(rear == 4)  // Maximum index for a 5-element queue
    {
        printf("\nQueue is full\n");
    }
    else 
    {
        if (front == -1)  // If the queue is initially empty
        {
            front = 0;
        }
        printf("Enter a value: ");
        scanf("%d", &value);
        que[++rear] = value; 
    }
}

void peek()
{
    if(front == -1 || front > rear)  // Check if the queue is empty
    {
        printf("\nQueue is empty\n");
    }
    else 
    {
        printf("First element: %d\n", que[front]);
    }
}

void pop()
{
    if(front == -1 || front > rear)  // Check if the queue is empty
    {
        printf("\nQueue is empty\n");
    }
    else 
    {
        printf("\n%d is popped\n", que[front]);
        front++; 
        if(front > rear)  // Reset the queue if all elements are popped
        {
            front = rear = -1;
        }
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
