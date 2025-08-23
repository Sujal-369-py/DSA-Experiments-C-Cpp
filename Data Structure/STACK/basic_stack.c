#include<stdio.h> 

int stack[6],num,i = -1;

void push()
{
    if((i+1) == sizeof(stack)/4)
    {
        printf("\nStack is Full");
    }
    else
    {
        i++;
        printf("\nEnter a number : ");
        scanf("%d",&num);
        stack[i] = num;
        printf("%d added to stack",stack[i]);
    }
}

void pop()
{
    if(i == -1)
    {
        printf("\n Stack is Empty");
    }
    else 
    {
        printf("\n%d Element  is removed from Stack",stack[i]);
        i--;
    }
}

void peek() 
{
    printf("\nTop most element of Stack : %d",stack[i]);
}


int main()
{
    int choice; 
    do 
    {
        printf("\n\nEnter 1 for PUSH ");
        printf("\nEnter 2 for POP ");
        printf("\nEnter 3 for PEEK ");
        printf("\nEnter 4 for Exit ");
        printf("\n Enter your choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            push();
        }
        else if(choice == 2)
        {
            pop();
        }
        else if(choice == 3)
        {
            peek();
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            printf("\n INVALID CHOICE PLEASE CHOICE AGAIN");
        }
    
    }
    while(choice != 4);
    
}