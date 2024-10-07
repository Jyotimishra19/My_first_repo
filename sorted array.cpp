//Here in C++ program to sort the binary array {1, 0, 1, 0, 1, 0} into {0, 0, 0, 1, 1, 1} 

#include <iostream>
#include <algorithm>  // For std::sort
using namespace std;

int main() {
    int input_array[] = {1, 0, 1, 0, 1, 0};
    int size = sizeof(input_array) / sizeof(input_array[0]);

    // Use the built-in sort function to sort the array
    sort(input_array, input_array + size);

    // Output the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << input_array[i] << " ";
    }
    cout << endl;

    return 0;
}


