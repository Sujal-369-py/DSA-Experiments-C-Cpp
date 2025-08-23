#include<stdio.h> 

int push(int stack[], int *i, int size,int value)
{
    if((*i) == (size-1))
    {
        printf("\nStack is Full\n");
    }
    else 
    {
        stack[++(*i)] = value;
    }
    return i;
}

int pop(int stack[], int *i)
{
    if(*i == -1)
    {
        printf("\nStack is empty\n");
    }
    else 
    {
        stack[--(*i)];
    }
}

int  peek(int stack[], int *i)
{
    return stack[*i];
}

int main()
{
    int stack[3],i = -1, size = 3, choice, value; 
    do 
    {
        printf("\n\n1 for push\n2 for pop\n3 for peek\n4for exit\n your choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            printf("Enter a value : ");
            scanf("%d",&value);
            push(stack,&i,size,value);
        }

        else if(choice == 2)
        {
            printf("\n%d is poped \n",pop(stack,&i));
        }

        else if(choice == 3)
        {
            printf("%d is top most element ",peek(stack,&i));
        }
        else if(choice== 4)
        {
            break;
        }

        else
        {
            printf("\nwrong input");
        }

    }while(choice != 4);

}