#include<stdio.h>
void search(int arr[], int find, int size)
{
    int k = -1;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == find)
        {
            k = i;
            printf("%d",k);
            break;
        }
    }
    if(k == -1)
    {
        printf("%d",k);
    }
}
int main()
{
    int size;
    printf("Enter size of arrayu : ");
    scanf("%d",&size);

    int arr[size], find;
    for(int i=0; i<size; i++)
    {
        printf("Enter array : ");
        scanf("%d",&arr[i]);
    }

    printf("Enter element to find : ");
    scanf("%d",&find);
    search(arr,find, size);
}