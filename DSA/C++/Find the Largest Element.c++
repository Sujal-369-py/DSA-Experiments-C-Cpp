#include<iostream>
using namespace std;

int main() {
    int arr[10];
    int n;

    cout << "Enter number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0]; 

    for (int i = 1; i < n; i++) {  
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum in the array: " << max << endl;

    return 0;
}
