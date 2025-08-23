#include<stdio.h>
#include<stdlib.h>

struct linklist 
{
    int data;
    struct linklist *next;
};

struct linklist *start = NULL;
struct linklist *last = NULL;
struct linklist *temp;

void insert_at_beg(int val,int *count)
{
    temp = (struct linklist  *)malloc(sizeof(struct linklist));
    if(temp != NULL)
    {
        if(last == NULL)
        {
            last = temp;
        }
        temp->data = val;
        temp->next = start;
        start = temp;
        last ->next = start;
        (*count)++;
    }
}

void insert_at_end(int val,int *count)
{
    temp = (struct linklist  *)malloc(sizeof(struct linklist));
    if(temp != NULL)
    {
        if(start == NULL)
        {
            last = temp;
            start = temp;
        }
        temp->data = val;
        temp->next = start;
        last->next = temp;
        last = temp;
        (*count)++;
    }
}

int insert_at_pos(int pos,int val,int *count)
{
    if(pos < 1 || pos > (*count)+1)
    {
        return -1;
    }
    else if(pos == 1)
    {
        insert_at_beg(val,count);
    }
    else if(pos == (*count)+1)
    {
        insert_at_end(val,count);
    }
    else 
    {
        temp = (struct linklist  *)malloc(sizeof(struct linklist));
        if(temp != NULL)
        {
            struct linklist *search = start;
            struct linklist *sl;
            for(int i=1; i<pos; i++)
            {
                sl = search;
                search = search->next;
            }
            temp->data = val;
            sl->next = temp;
            temp->next = search;
            (*count)++;
        }
    }
}

int delete_at_beg(int *count)
{
    temp = start;
    int back = start->data;
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
    (*count)--;
    return back;
}

int delete_at_end(int *count)
{
    temp = start;
    struct linklist *sl;
    do 
    {
        sl = temp;
        temp = temp->next;
    }
    while(temp->next != start);
    int  back = last->data;
    last = sl;
    last->next = start;
    free(temp);
    (*count)--;
    return back;
}

int delete_at_pos(int pos,int *count)
{
    if(pos < 1 || pos >(*count))
    {
        return -1;
    }
    else if(pos == 1)
    {
        delete_at_beg(count);
    }
    else if(pos == (*count))
    {
        delete_at_end(count);
    }
    else 
    {
        struct linklist *sl;
        temp = start;
        for(int i=1; i<pos; i++)
        {
            sl = temp;
            temp = temp->next;
        }
        int back = temp->data;
        sl->next = temp->next;
        free(temp);
        (*count)--;
        return back;
    }
}

int traverse()
{
    if(start == NULL)
    {
        return -1;
    }
    temp = start;
    do 
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    while(temp != start);
    
}

int main()
{
    int val,pos,count=0,choice,call;

    while(1)
    {
        printf("\nEnter your choice user : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            printf("Enter the value : ");
            scanf("%d",&val);
            printf("Enter the position : ");
            scanf("%d",&pos);
            call = insert_at_pos(pos,val,&count);
            if(call == -1)
            {
                printf("Inavlid position.Please try again!");
            }
            else 
            {
                printf("%d is pushed",val);
            }
        }
        else if(choice == 2)
        {
            printf("Enter the position that you want to delete : ");
            scanf("%d",&pos);
            call = delete_at_pos(pos,&count);
            if(call == -1)
            {
                printf("Invalid position to delete.Pleasse try again.!");
            }
            else 
            {
                printf("%d is deleted",call);
            }
        }
        else if(choice == 3)
        {
            call = traverse();
            if(call == -1)
            {
                printf("\n--------------------------");
            }
        }
        else 
        {
            printf("Invalid Please try again !!!");
        }
    }
}