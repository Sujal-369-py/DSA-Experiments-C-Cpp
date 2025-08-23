#include<stdio.h>

int partition(int arr[20], int left, int right)
{
    int pivot = left;
    while(left<=right)
    {
        while(right>=left)
        {
            if(arr[pivot] > arr[right])
            {
                int temp = arr[pivot];
                arr[pivot] = arr[right];
                arr[right] = temp;
                pivot = right;
                right--;break;
            }
            right--;
        }

        while(left <= right)
        {
            if(arr[pivot] < arr[left])
            {
                int temp = arr[pivot];
                arr[pivot] = arr[left];
                arr[left] = temp;
                pivot = left;
                left++;break;
            }
            left++;
        }
    }
    return pivot;
}

int quicksort(int arr[], int left, int right)
{
    if(left<right)
    {
   int p = partition(arr,left,right);
   quicksort(arr,left,p-1);
   quicksort(arr,p+1,right);
    }
}
int main()
{
    int arr[] = {9,2,1,13,12};
    int left = 0,right = 4;

    quicksort(arr,left,right);

    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
}