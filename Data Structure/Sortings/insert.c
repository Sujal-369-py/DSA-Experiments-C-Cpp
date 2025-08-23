#include<stdio.h> 

int main()
{
    int arr[] = {3,2,1, 9, 6, 5 ,11, 19};
    int temp,j;

    for(int i = 1; i<sizeof(arr)/4; i++)
    {
        temp = arr[i];
        j = i-1;

        while(j>= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            arr[j] = temp; 
            j--;
        }
    }

    for(int i = 0; i<sizeof(arr)/4; i++)
    {
        printf("%d\t",arr[i]);
    }
}