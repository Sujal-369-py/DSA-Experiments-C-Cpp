#include<stdio.h>

int main()
{
    int arr[] = {5,3,2,1},temp,j;
    int size = sizeof(arr)/sizeof(arr[0]);
   
   for(int i=1; i<size; i++)
   {
       temp = arr[i];
       j = i-1;

       while(temp < arr[j] && j>=0)
       {
        arr[j+1] = arr[j];
        j--;
       }
       arr[j+1] = temp;
   }
   for(int i=0; i<size; i++)
   {
    printf("%d ",arr[i]);
   }
}