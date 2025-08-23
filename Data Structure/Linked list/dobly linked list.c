#include<stdio.h>
#include<stdlib.h>

struct linklist
{
    struct linklist *pre;
    int data;
    struct linklist *next;
};
struct linklist *start = NULL;
struct linklist *last = NULL;
int val,count=0,pos;

void insert_at_beg()
{
    struct linklist *temp = (struct linklist *)malloc(sizeof(struct linklist));
    if(temp != NULL)
    {
        printf("\nEnter the value : ");
        scanf("%d",&val);
        if(start == NULL)
        {
            last = temp;
        }
        temp->pre = NULL;
        temp->data = val;
        temp->next = start;
        if(start != NULL)
        {
            start->pre = temp;
        }
        start = temp; 
        count++;
    }
}

void insert_at_end()
{
     struct linklist *temp = (struct linklist *)malloc(sizeof(struct linklist));
    if(temp != NULL)
    {
        printf("\nEnter the value : ");
        scanf("%d",&val);
        if(start == NULL)
        {
            start = temp;
        }
        temp->pre = last;
        temp->data = val;
        temp->next = NULL;
        if(last != NULL)
        {
            last->next = temp;
        }
        last = temp;
        count++;
    }
}

void insert_at_pos()
{
    printf("Enter position : ");
    scanf("%d",&pos);

    if(pos <1 || pos >= count+2)
    {
        printf("\nInvalid credit");
    }
    else if(pos == 1)
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
            printf("\nEnter value : ");
            scanf("%d",&val);
            temp->data = val;
            struct linklist *l = start;
            struct linklist *sl;
            for(int i=1; i<pos; i++)
            {
                sl = l;
                l = l->next;
            }
            temp->pre = sl;
            temp->next = sl->next;
            sl->next = temp;
            l->pre = temp;
            count++;
        }
    }
}

void delete_at_beg()
{
    if(start == NULL)
    {
        printf("\nLinked list is empty");
    }
    struct linklist *temp = start;
    printf("%d is delted",start->data);
    if(start == last)
    {
        start = last = NULL;
    }
    else 
    {
        start = start->next;
        start->pre = NULL;
    } 
    free(temp);
    count--;
}

void delete_at_end()
{
    if(start == NULL)
    {
        printf("\nLinked list is empty");
    }
    struct linklist *temp = last;
    printf("%d is delted",last->data);
    if(start == last)
    {
        start = last = NULL;
    }
    else 
    {
        last = last->pre;
       last->next = NULL;
    }
       free(temp);
       count--;
}

void delete_at_pos()
{
      printf("Enter position : ");
    scanf("%d",&pos);

    if(pos <1 || pos > count)
    {
        printf("\nInvalid credit");
    }
    else if(pos == 1)
    {
        delete_at_beg();
    }
    else if(pos == count)
    {
        delete_at_end();
    }
    else 
    {
        struct linklist *l = start;
        struct linklist *sl;
        struct linklist *temp;
        for(int i=1; i<pos; i++)
        {
            sl = l;
            l = l->next;
        }
        printf("%d is deleted",l->data);
        temp = l;
        l = l->next;
        sl->next = l;
        l->pre = sl;
        free(temp);
        count--;
    }
}

void  traverse()
{
    struct linklist *l = start;
    while(l != NULL)
    {
        printf("%d ",l->data);
        l = l->next;
    }
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