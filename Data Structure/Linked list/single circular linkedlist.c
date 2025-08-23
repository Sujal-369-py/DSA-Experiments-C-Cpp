#include<stdio.h>
#include<stdlib.h>

struct linklist 
{
    int data;
    struct linklist *next;
};
struct linklist *start= NULL;
struct linklist *last = NULL;

 int pos,count=0,val;

void insert_at_beg()
{
    struct linklist *temp = (struct linklist *)malloc(sizeof(struct linklist));
    if(temp != NULL)
    {
        printf("Enter a value : ");
        scanf("%d",&val);
        if(start == NULL)
        {
            last = temp;
        }
        temp->data = val;
        temp->next = start;
        start = temp;
        last->next = temp;

        if(last == NULL)
        {
            last = start;
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
        temp->next = start;

        if(last == NULL)// if user enter last position at beg
        {
            last = temp;
            start = temp;
        }
        else 
        {
            last->next = temp;
            last = temp;
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
    else if(pos == count+1)
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
    if(start == NULL)
    {
        printf("Linked list is empty");
        return ;
    }
    struct linklist *temp = start;
    printf("%d is deleted",start->data);
   if(start == last)
   {
    start = last = NULL;
   }
   else 
   {
    start = start->next;
    last->next = start;
   }
    free(temp);
    count--;
}

void delete_at_end()
{
    if(start == NULL)
    {
        printf("Linked list is empty");
        return ;
    }
    else 
    {
        struct linklist *temp = start;
        struct linklist *sl;

        while(temp->next != start)
        {
            sl = temp;
            temp = temp->next;
        }

        printf("%d is deleted",last->data);

        if(last == start)
        {
            start = last = NULL;
        }
        else 
        {
        last = sl;
        last->next = start;
        }
        free(temp);
        count--;
    }
}

void delete_at_pos()
{
     printf("Enter a position : ");
    scanf("%d",&pos);
    if(pos < 1 || pos > count)
    {
       printf("\nInvalid credit");
    }
    else if(pos ==  1)
    {
        delete_at_beg();
    }
    else if(pos == count)
    {
        delete_at_end();
        return;
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

void traverse()
{
    struct linklist *temp = start;
    do 
    {
        printf("%d  ",temp->data);
        temp = temp->next;
    }
    while(temp != start);
}

void search()
{
    int s;
    printf("Enter value you want to search : ");
    scanf("%d",&s);

    struct linklist *temp = start;
    do 
    {
          if(temp->data == s)
        {
            printf("%d is founded at linked list",temp->data);
           return ;
        }
    }
    while(temp->data != last->data);
      
        temp = temp->next;

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