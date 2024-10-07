Here’s a simple C++ program to separate even and odd numbers from the input array {7, 3, 8, 4, 2}:

#include <iostream>
using namespace std;

int main() {
    // Input array
    int arr[] = {7, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Output arrays for even and odd numbers
    int even[size], odd[size];
    int evenIndex = 0, oddIndex = 0;

    // Loop to separate even and odd numbers
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenIndex++] = arr[i];
        } else {
            odd[oddIndex++] = arr[i];
        }
    }

    // Output even numbers
    cout << "Even numbers: ";
    for (int i = 0; i < evenIndex; i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    // Output odd numbers
    cout << "Odd numbers: ";
    for (int i = 0; i < oddIndex; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;

    return 0;
}

