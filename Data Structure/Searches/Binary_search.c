#include<stdio.h>
int main()
{
   int size, low, high, mid;
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

    low = 0;
    high = sizeof(arr)/4;

    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == find)
        {
            printf("Item found at index : %d",mid);
            break;
        }
        else if(arr[mid] > find)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
        if(low > high)
        {
            printf("Item not found");
        }
}