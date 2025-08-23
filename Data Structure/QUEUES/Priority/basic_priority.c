#include<stdio.h> 

char que[6];
int priority[6],f1 = -1,r1 = -1,f2 = -1,r2 = -1,size = 6;

void push()
{
    int value;
    char ch;

    if(r1 == size-1)
    {
        printf("\nQueues is full");
    }
    else 
    {
        if(f1 == -1 && f2 == -1)
        {
            f1++;f2++;
        }
        else 
        {
            getchar();
                printf("\nEnter character : ");
                scanf("%c",&ch);
                printf("\nEnter priority : ");
                scanf("%d",&value);
                que[++r1] = ch;
                priority[++r2] = value;

            int i=r2;
            while(i>0 && priority[i] < priority[i-1])
            {
                int temp = priority[i];
                priority[i] = priority[i-1];
                priority[i-1] = temp;

                char temp_ch = que[i];
                que[i] = que[i-1];
                que[i-1] = temp_ch;

                i--; 
            }

        }
    }
}

void pop()
{
    if(f1 == -1|| f1 > r1)
    {
        getchar();
        printf("\nQueues is empty");
    }
    else 
    {
        getchar();
        printf("%c is poped",que[f1]);
        que[++f1];
        priority[++f2];
    }
}

void peek()
{
    if(f1 == -1 ||  f1 > r1)
    {
        getchar();
        printf("\nQueues is empty");
    }
    else 
    {
        getchar();
        printf("%c is Top element",que[f1]);
    }
}

int main()
{
    int choice;
    while(1)
    {
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
   
}
