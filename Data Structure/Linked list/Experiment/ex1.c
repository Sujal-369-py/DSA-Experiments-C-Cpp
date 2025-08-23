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

int insert_at_beg(int val, int count)
{
    temp = (struct linklist *)malloc(sizeof(struct linklist));
    
    if(temp != NULL)
    {
        temp->data = val;
        temp->next = start;
        if(last == NULL)
        {
            last = temp;
        }
        start = temp;
    }
    return count+1;
    
}

int insert_at_end(int val, int count)
{
    temp = (struct linklist *)malloc(sizeof(struct linklist));

    if(temp != NULL)
    {
        if(start == NULL) 
        {
            last = temp; //EDGE CASE (if user want 1st node as last node)
            start = temp;
        }

        temp->data = val;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    return count+1;
}

int insert_at_pos(int val,int pos,int count)
{
    if(pos <1 || pos >= (count)+2)  // must be so that it could handel the case if pos is equal to or gretor than count+2
    {
        // Not handling invalid case;
        return -1;
    }
    else if(pos == 1)
    {
        insert_at_beg(val,count);
    }
    else if(pos == (count)+1)
    {
        insert_at_end(val,count);
    }
    else
    {
        temp = (struct linklist *)malloc(sizeof(struct linklist));
        temp->data = val;

        struct linklist *search = start;
        struct linklist *sl;

        for(int i=1; i<pos; i++)
        {
            sl = search;
            search = search->next;
        }
        temp->next = search;
        sl->next = temp;
    }
    return count+1;
}




void traverse()
{
    temp = start;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
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
            call = insert_at_pos(val,pos,count);
            if(call != -1)
            {
                 count = call;
            }
           
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
            traverse();
        }
    }
}