#include<stdio.h>

int main() {
    int arr[] = {3, 2, 1,8,6,9,4};
    int i, j, temp;

    // Outer loop for unsorted part of array
    for(i = 1; i < sizeof(arr)/4; i++) {
        temp = arr[i]; // Store the current element
        j = i - 1;
        
        // Shift elements to the right if they are greater than temp
        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j]; // Shift the element to the right
            j--;
        }
        arr[j + 1] = temp; // Insert temp in its correct position
    }

    // Printing the sorted array
    for(int k = 0; k < sizeof(arr)/4; k++) {
        printf("%d ", arr[k]);
    }
    
    return 0;
}
