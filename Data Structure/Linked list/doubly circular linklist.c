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

int val,pos,count=0;

void insert_at_beg()
{
    struct linklist *temp = (struct linklist *)malloc(sizeof(struct linklist));
    if(temp != NULL)
    {
        printf("Enter value : ");
        scanf("%d",&val);
        if(last == NULL)
        {
            last = temp;
        }
        temp->pre = last;
        temp->data = val;
        temp->next = start;
        last->next = temp;
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
        printf("Enter value : ");
        scanf("%d",&val);
        if(start == NULL)
        {
            start = temp;
            last = temp;
        }
        temp->pre = last;
        temp->data = val;
        temp->next = start;
        last->next = temp;
        start->pre = temp;
        last = temp;
        count++;
    }
}

void insert_at_pos()
{
    printf("Enter the position : ");
    scanf("%d",&pos);

    if(pos < 1 || pos >=count+2)
    {
        printf("\nInvalid Credit ! try again user.......");
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
            printf("Enter value : ");
            scanf("%d",&val);
            struct linklist *l = start;
            struct linklist *sl;
            for(int i=1; i<pos; i++)
            {
                sl = l;
                l = l->next;
            }
           temp->pre = sl;
           temp->data = val;
           temp->next = l;
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
        printf("\nlinklsit is empty");
    }
    struct linklist *temp = start;
    printf("%d is delted",start->data);
    if(start == last)
    {
        start=last=NULL;
    }
    else
    {
        start = start->next;
        start->pre = last;
        last->next = start;
    }
    free(temp);
    count--;
}

void delete_at_end()
{
    if(start == NULL)
    {
        printf("\nlinklsit is empty");
    }
    struct linklist *temp = last;
    printf("%d is delted",last->data);
    if(start == last)
    {
        start=last=NULL;
    }
    else
    {
        last = last->pre;
        last->next = start;
        start->pre = last;
    }
    free(temp);
    count--;
}

void delete_at_pos()
{
    printf("Enter the position : ");
    scanf("%d",&pos);

    if(pos < 1 || pos > count)
    {
        printf("\nInvalid Credit ! try again user.......");
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
        struct linklist *temp;
        struct linklist *l = start;
        struct linklist *sl;
        for(int i=1; i<pos; i++)
        {
            sl = l;
            l = l->next;
        }
        temp = l;
        l = l->next;
        printf("%d is deleted",temp->data);
        sl->next = l;
        l->pre = sl;
        free(temp);
        count--;
    }
}

void transve()
{
    if(start == NULL)
    {
        printf("\nLinklist is empty");
        return;
    }
    struct linklist *temp = start;
    do 
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    while(temp != start); 
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
            transve();
        }
    }
}