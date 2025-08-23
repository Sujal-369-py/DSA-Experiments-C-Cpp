#include<stdio.h> 

int main()
{
    int arr[]={5,1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int swapped;

for(int k=0; k<size-1; k++)
{
    swapped = 0;
    for(int i=1; i<size-k; i++)
    {
            if(arr[i-1] > arr[i])
            {
                int temp = arr[i-1]; 
                arr[i-1] = arr[i]; 
                arr[i] = temp;
                swapped = 1;
            }
    }
    if(swapped == 0)
    {
        break;
    }
}

    for(int i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
}