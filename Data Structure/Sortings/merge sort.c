#include<stdio.h>

void merge(int arr[], int left, int mid, int right)
{
    int i,j,k;

    int size1 = mid - left+1;
    int size2 = right - mid;

    int L[size1], R[size2];

    for(i=0; i<size1; i++)
    {
        L[i] = arr[left + i];
    }
    for(j=0; j<size2; j++)
    {
        R[j] = arr[mid +1 + j];
    }
    i=0;
    j=0;
    k=left;

    while(i< size1 && j< size2)
    {
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i< size1)
    {
        arr[k] = L[i];
        i++;k++;
    }

    while(j< size2)
    {
        arr[k] = R[j];
        j++;k++;
    }

}

void Mergesort(int arr[], int left, int right)
{
    if(left<right)
    {
        int mid = (left+right)/2;
        Mergesort(arr,left,mid);
        Mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

int main()
{
    int arr[] = {5,7,3,4,1};
    int l=0,r=4;

    Mergesort(arr,l,r);

    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
}