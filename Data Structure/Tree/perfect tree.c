#include<stdio.h>
#include<stdlib.h>

struct bst 
{
    int data;
    struct bst *l;
    struct bst *r;
};

struct bst *start = NULL;
struct bst *temp;
struct bst *parent = NULL;
struct bst *child;

int search_and_insert();

int insert(int val)
{
    if(start == NULL)
    {
        start = (struct bst *)malloc(sizeof(struct bst));
        start->l = NULL;
        start->data = val;
        start->r = NULL;
    }
    else 
    {
        temp = (struct bst *)malloc(sizeof(struct bst));
        if(temp != NULL)
        {
            temp->l = NULL;
            temp->data = val;
            temp->r = NULL;

            int call = search_and_insert(temp);

            if(call == -1)
            {
                return -1;
            }
            else 
            {
                struct bst *search = start;
                struct bst *sl;

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
}

int search_and_insert()
{
    struct bst *s = start;
    while(s != NULL)
    {
        if(temp->data == s->data)
        {
            return -1;
        }
        else if(temp->data < s->data)
        {
            s = s->l;
        }
        else 
        {
            s = s->r;
        }
    }
}

int searching(int find)
{
    child = start;
    while(child != NULL)
    {
        if(child->data == find)
        {
           break;
        }
        else if(find < child->data)
        {
            parent = child;
            child = child->l;
        }
        else 
        {
            parent = child;
            child =child->r;
        }
    }
    if(child == NULL)
    {
        return -1;
    }
    else 
    {
        return child->data;
    }
}

int delete(int find)
{
    searching(find);
    if(child != NULL)
    {
        int back = child->data;
        if(child->l == NULL && child->r == NULL)
        {
            if(parent == NULL)
            {
                parent = child;
                
            }
            if(parent->l != NULL)
            {
                parent->l = NULL;
            }
            else 
            {
                parent->r = NULL;
            }
            free(child);
        }
        else if(child->l == NULL || child->r == NULL)
        {
            int c;
            if(child->l == NULL)
            {
                c = 0; // Node have right child;
            }
            else 
            {
                c = 1;// NOde have a left child;
            }
            if(parent->l == child && c==1) // left child have left child
            {
                parent->l = child->l;
            }
            else if(parent->l == child && c==0) // left  child have  right child
            {
                parent->l = child->r;
            }
            else if(parent->r == child && c==0) // right child have right child;
            {
                parent->r = child->r;
            }
            else if(parent->r == child && c==1) // right child have left child;
            {
                parent->r = child->l;
            }
            free(child);
        }
        else 
        {
            struct bst *inp = child;
            struct bst *dangling;
            if(parent == NULL)
            {
                parent = child;
            }
            inp = inp->l;

            while(inp->r != NULL)
            {
                dangling = inp;
                inp = inp->r;
            }
            child->data = inp->data;
            dangling->r = inp->l;
            free(inp);
        }
        return back; 
    }
    else 
    {
        return -1;
    }
}

void traverse(struct bst *t)
{
    if(t != NULL)
    {
        printf("%d ",t->data);
        traverse(t->l);
        traverse(t->r);
    }
}

int main()
{
    int choice,val,find,call;
    while(1)
    {
        printf("\nEnter your choice User : ");
        scanf("%d",&choice);

        if(choice== 1)
        {
            printf("Enter the value : ");
            scanf("%d",&val);
            call = insert(val);
            if(call == -1)
            {
                printf("\nData Already Exit..!!");
            }
            else 
            {
                printf("%d is pushed",val);
            }
        }
        else if(choice == 2)
        {
            printf("Enter value you want to Delete : ");
            scanf("%d",&find);
            call = delete(find);
            if(call == -1)
            {
                printf("Element NOt present");
            }
            else
            {
                printf("%d is deleted",call);
            }
        }
        else if(choice == 3)
        {
            traverse(start);
        }
        else if(choice == 4)
        {
            printf("Enter value you want to find in tree : ");
            scanf("%d",&find);
            call = searching(find);
            if(call == -1)
            {
                printf("Data not found");
            }
            else 
            {
                printf("%d is founded",temp->data);
            }
        }
        else 
        {
            printf("Wrong Input User....");
        }
    }
}