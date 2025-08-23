#include<stdio.h>
#include<stdlib.h>

struct poly 
{
    int coffcient;
    int power;
    struct poly *next;
};

struct poly *start = NULL;
struct poly *last = NULL;
struct poly *temp;

int insert(int cof,int pow)
{
    temp = (struct poly *)malloc(sizeof(struct poly));
    if(temp != NULL)
    {
        temp->coffcient = cof;
        temp->power = pow;
        temp->next = NULL;


        // inserting at beg
        if(start == NULL)
        {
            start = temp;
        }
        else 
        {
            if(temp->power > start->power)
            {
                temp->next = start;
                start = temp;
            }
            else if(temp->power == start->power)
            {
                start->coffcient+=temp->coffcient;
            }
        }

        // now inserting at end
        if(last == NULL)
        {
            last = temp;
        }
        else 
        {
            if(temp->power < last->power)
            {
                last->next = temp;
                last = temp;
            }
            else if(temp->power == last->power)
            {
                last->coffcient+=temp->coffcient;
            }
        }
        
        //inserting at any position or adjusting the node in between accordin to cofficient
        if(temp->power < start->power && temp->power > last->power)
        {
            struct poly *search = start;
            struct poly *sl;
            while(search != NULL)
            {
                if(search->power == temp->power)
                {
                    break;
                }
                else if(search->power > temp->power)
                {
                    sl = search;
                    search = search->next;
                }
                else 
                {
                    break;
                }
            }
            if(search->power == temp->power)
            {
                search->coffcient+=temp->coffcient;
            }
            else 
            {
                temp->next = sl->next;
                sl->next = temp;
            }
            
        }
    }
    else 
    {
        return -1;
    }
}

int traverse()
{
    temp = start;
    if(temp == NULL)
    {
        return -1;
    }
    else
    {
        while(temp!= NULL)
        {
            if(temp->coffcient > 0)
            {
                printf("+");
            }
            printf("%dx^%d ",temp->coffcient,temp->power);
            temp = temp->next;
        }
    }
}

int main(void)
{
    int cof,choice,power,call;

    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            printf("Enter cofficient with sign(for eg. +3,-2) : ");
            scanf("%d",&cof);
            printf("Enter power : ");
            scanf("%d",&power);
            call = insert(cof,power);
            if(call != -1)
            {
                printf("\nEntered succesfully");
            }
            else 
            {
                printf("\nMemory out of space");
            }
        }
        else if(choice == 2)
        {
            call = traverse();
            if(call == -1)
            {
                printf("\nEquation is empty");
            }
        }
        else 
        {
            printf("\nWrong input.Please try again");
        }
    }
}