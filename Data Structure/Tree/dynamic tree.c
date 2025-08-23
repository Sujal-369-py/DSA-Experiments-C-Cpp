#include<stdio.h>
#include<stdlib.h>

struct bst 
{
    struct bst *l;
    int data;
    struct bst *r;
};
struct bst *start = NULL;
struct bst *temp;
struct bst *search;
struct bst *sl;

int val;

void insert()
{
    if(start == NULL)
    {
        start = (struct bst *)malloc(sizeof(struct bst));
        printf("Enter root node : ");
        scanf("%d",&val);
        start->l = NULL;
        start->data = val;
        start->r = NULL;
    }
    else 
    {
        temp = (struct bst *)malloc(sizeof(struct bst));
        if(temp!= NULL)
        {
            printf("\nEnter data : ");
            scanf("%d",&val);
            temp->l = NULL;
            temp->data = val;
            temp->r = NULL;

            search = start;
            while(search != NULL)
           {  
                if(search->data > temp->data)
                {
                    sl = search;
                    search = search->l;
                }
                else 
                {
                    sl = search;
                    search = search->r;
                }
           }
            if(sl->data > temp->data)
            {
                sl->l = temp;
            }
            else 
            {
                sl->r = temp;
            }
        }
    }
}

void delete()
{
    int find;
    printf("Enter element to delete : ");
    scanf("%d",&find);
    search = start;
    struct bst *second_last = NULL;

    while(search != NULL)
    {
        if(search->data == find)
        {
            break;
        }
        else if(find > search->data)
        {
            second_last = search;
            search = search->r;
        }
        else
        {
            second_last = search;
            search = search->l;
        }
    }
        if(search == NULL)
        {
            printf("\nNot found");
        }
    if(search->l == NULL && search->r == NULL)
    {
        printf("%d is delted",search->data);
        if(second_last->r == search)
        {
            second_last->r = NULL;
        }
        else 
        {
            second_last->l = NULL;
        }
        free(search);
    }
    else if(search->l != NULL && search->r != NULL)
    {
        printf("%d is delted",search->data);
        struct bst *ins = search;
        second_last = ins;
        ins = ins->r;
        while(ins->l != NULL)
        {
            second_last = ins;
            ins = ins->l;
        }
        search->data = ins->data;
        second_last->l = ins->r;
        free(search);
    }
    else 
    {
        int c;
        printf("%d is delted",search->data);
        if(search->l == NULL)
        {
            c = 0;
        }
        else
        {
            c = 1;
        }
        if(sl->l == search && c == 0)
        {
            sl->l = search->r;
        }
        else if(sl->l == search && c == 1)
        {
            sl->l = search->l;
        }
        else if(sl->r == search && c == 0) 
        {
            sl->r = search->r;
        }
        else if(sl->r == search && c == 1)
        {
            sl->r = search->l;
        }
        free(search);
    }
}

void preorder(struct bst *t)
{
    if(t != NULL)
    {
        printf("%d ",t->data);
        preorder(t->l);
        preorder(t->r);
    }
}

int main()
{
    int choice;
    while(3)
    {
        printf("\nEnter choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            insert();
        }
        else if(choice == 2)
        {
            delete();
        }
        else if(choice == 3)
        {
            preorder(start);
        }
        else if(choice == 4)
        {
            break;
        }
        else 
        {
            printf("\nWrong input");
        }
    }
}















