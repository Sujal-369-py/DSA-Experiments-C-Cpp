#include<stdio.h>

void insert(int bound,int bst[])
{
    int element,i=0;

    printf("\nEnter elemnt : ");
    scanf("%d",&element);

    if(element == bound)
    {
        printf("\nInvalid eleemnt. TRy again !!!");
    }
    
    if(element < bound)
    {
        i = 1;
        while(bst[i] != element)
        {
           
            if(bst[i] == bound)
            {
                bst[i] = element;
            }
            else if(element < bst[i])
            {
                i = 2*i+1;
            }
            else 
            {
                i = 2*i + 2;
            }
        };
    }
    else
    {
        i = 2;
        while(bst[i] != element)
        {
            if(bst[i] == bound)
            {
                bst[i] = element;
            }
            else if(element < bst[i])
            {
                i = 2*i+1;
            }
            else 
            {
                i = 2*i + 2;
            }
        }
    }
}

void search(int bst[],int size)
{
    int s,i=0;
    printf("Enter element to search: ");
    scanf("%d",&s);

    while(i < size)
    {
    if(bst[i] == s)
    {
        printf("\nFound");
        break;
    }
    else if(s < bst[i])
    {
        i = 2*i +1;
    }
    else 
    {
        i = 2*i + 2;
    }
    }
    if(i>size)
    {
        printf("Not found");
    } 
}

void delete(int bst[], int size,int bound)
{
    int i=0,find;
    printf("Entrer element top delete : ");
    scanf("%d",&find);

    while(bst[i] != find || i < size)
    {
    if(bst[i] == find)
    {
        break;
    }
    else if(find < bst[i])
    {
        i = 2*i +1;
    }
    else 
    {
        i = 2*i + 2;
    }
    }

    if(bst[i] == find)
    {
        if(bst[2*i+1] == bound && bst[2*i+2] == bound)
        {
            bst[i] = bound;
        }
        else if (bst[2 * i + 1] != bound && bst[2 * i + 2] == bound)
         {  
            int j = 2 * i + 1;
            while (bst[j] != bound)
            {
                j = 2 * j + 2;
            }
            if (bst[2 * j + 1] != bound)
            {
                bst[i] = bst[j];
                bst[j] = bst[2*j+1];
                bst[2*j+1] = bound;
            } 
            else
            {
                bst[i] = bst[j];
                bst[j] = bound; 
            }
        }
         else if(bst[2*i+1]==bound || bst[2*i+2] == bound)
        {
            if(bst[2*i+1] != bound)
            {
                while(bst[2*i+1] != bound)
                {
                    bst[i] = bst[2*i+1];
                    i = 2*i+1;
                }
            }
            else 
            {
                while(bst[2*i+2] != bound)
                {
                    bst[i] = bst[2*i+2];
                    i = 2*i+2;
                }
            }
        }

    }
}
int main()
{
    int bound,bst[20],choice,size = 20;
    printf("Enter bound element : ");
    scanf("%d",&bound);

    for(int i=0; i<size; i++)
    {
        bst[i] = bound;
    }

    while(1)
    {
        printf("\nEnter choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            insert(bound,bst);
        }
        else if(choice == 2)
        {
            delete(bst,size,bound);
        }
        else if(choice == 3)
        {
            for (int i = 0; i < size; i++) 
            {
                printf("%d ", bst[i]);
            }
        }
        else if(choice == 4)
        {
            search(bst,size);
        }
         else if(choice == 5)
        {
            break;
        }
    }
}