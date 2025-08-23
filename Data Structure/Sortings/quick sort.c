#include<stdio.h> 

int partition(int arr[],int left,int right)
{
    int proit = left;
    while(left <= right)
    {
        while(right>= left)
        {
            if(arr[proit] > arr[right])
            {
                int temp = arr[proit];
                arr[proit] = arr[right];
                arr[right] = temp;
                proit = right;
                right--;
                break;
            }
            right--;
        }
        while(left <= right)
        {
            if(arr[proit] < arr[left])
            {
             int temp = arr[proit];
                arr[proit] = arr[left];
                arr[left] = temp;
                proit = left;
                left++;
                break;
            }
            left++;
        }
    }
    return proit;
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
    int arr[] = {5,4,3,2,1,6};
    int left=0,right=5;
    quicksort(arr,left,right);
    

    for(int i=0; i<6; i++)
    {
        printf("%d ",arr[i]);
    }
}