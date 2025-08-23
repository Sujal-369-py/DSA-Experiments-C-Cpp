#include<stdio.h>
#include<stdlib.h>

struct linklist 
{
    int data;
    struct linklist *next;
};
struct linklist *end = NULL;
struct linklist *start= NULL;

 int pos,count=0,val;

void insert_at_beg()
{
    struct linklist *temp = (struct linklist *)malloc(sizeof(struct linklist));
    if(temp != NULL)
    {
        printf("Enter a value : ");
        scanf("%d",&val);
        temp->data = val;
        temp->next = start;
        start = temp;

        if(end == NULL)
        {
            end = start;
        }
         count++;
    }
   
}

void insert_at_end()
{
    struct linklist *temp = (struct linklist *)malloc(sizeof(struct linklist));
       if(temp != NULL)
    {
        printf("Enter a value : ");
        scanf("%d",&val);
        temp->data = val;
        temp->next = NULL;

        if(end == NULL)// if user enter last position at beg
        {
            end = temp;
            start = temp;
        }
        else   // normally entering at end
        {
            end->next = temp;
            end = temp;
        }
        count++;
    }
}

void insert_at_pos()
{
    printf("Enter a position : ");
    scanf("%d",&pos);
    if(pos < 1 || pos >count+2)
    {
       printf("\nInvalid credit");
    }
    else if(pos ==  1)
    {
        insert_at_beg();
    }
    else if(pos == count)
    {
        insert_at_end();
    }
    else 
    {
        struct linklist *temp = (struct linklist *)malloc(sizeof(struct linklist));
        if(temp != NULL)
        {
        printf("Enter a value : ");
        scanf("%d",&val);
        temp->data = val;
        temp->next = NULL;

        struct linklist *sl = start;
        for(int i=1; i<pos-1; i++)
        {
            sl = sl->next;
        }
        temp->next = sl->next;
        sl->next = temp;
        }
        count++;
    }
}

void delete_at_beg()
{
    if(start == NULL && end == NULL)
    {
        printf("Linked list is empty");
    }
    else 
    {
        struct linklist *temp = start;
        printf("%d is deleted",start->data);
        start = start->next;
        free(temp);
        count--;
    }
}
void delete_at_end()
{
    if(start == NULL && end == NULL)
    {
        printf("Linked list is empty");
    }
    else 
    {
        struct linklist *temp = start;
        struct linklist *sl;

        while(temp != NULL)
        {
            sl = temp;
            temp = temp->next;
        }
        printf("%d is deleted",end->data);
        end = sl;
        end->next = NULL;
        free(temp);
        count--;
    }
}

void delete_at_pos()
{
     printf("Enter a position : ");
    scanf("%d",&pos);
    if(pos < 1 || pos >count)
    {
       printf("\nInvalid credit");
    }
    else if(pos ==  1)
    {
        delete_at_beg();
    }
    else if(pos == count-1)
    {
        delete_at_end();
    }
    else
    {
        if(start == NULL && end == NULL)
    {
        printf("Linked list is empty");
    }
    else 
    {
        struct linklist *temp = start;
        struct linklist *sl;

       for(int i=1; i<pos; i++)
       {
            sl = temp;
            temp = temp->next;
       }
        printf("%d is deleted",temp->data);
       sl->next = temp->next;
       free(temp);
       count--;
    }
    }
}

void traverse()
{
    struct linklist *temp = start;

    while(temp != NULL)
    {
        printf("%d ->",temp->data);
        temp = temp->next;
    }
}

void search()
{
    int s;
    printf("Enter value you want to search : ");
    scanf("%d",&s);

    struct linklist *temp = start;
    while(temp != NULL)
    {
        if(temp->data == s)
        {
            printf("%d is founded at linked list",temp->data);
           return ;
        }
        temp = temp->next;
    }
        printf("\nNOT found");
}

int main()
{
    int choice;
    while(1)
    {
        printf("\nChoice : ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            insert_at_pos();
        }
        else if(choice == 2)
        {
            delete_at_pos();
        }
        else if(choice == 3)
        {
            traverse();
        }
    }
}