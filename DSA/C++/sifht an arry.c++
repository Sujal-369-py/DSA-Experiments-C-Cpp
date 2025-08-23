#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3;
    int size = 3;  // Size of the original array
    int newSize = size + 1;  // New size after shifting

    cout << "Original array: \n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }

    int newArr[newSize];

    // Shift elements to the right
    for (int i = size; i > 0; i--) {
        newArr[i] = arr[i - 1];
    }

    // Optionally, set the first element to 0 or any default value
    newArr[0] = 0;

    cout << "\nShifted array: \n";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << "\t";
    }

    return 0;
}
