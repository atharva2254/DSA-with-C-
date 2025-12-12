// Array is actually a pointer which points to the address of the first element i.e., arr[0]

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers
    &arr;                        // Address of the whole array (type: int(*)[5])
    arr;                         // Pointer to first element (type: int*)
    &arr[0];                     // Address of the first element (same as arr)

    int *ptr = arr; // The array name 'arr' acts like a pointer to the first element (arr[0])

    // Printing the address stored in ptr (same as &arr[0])
    cout << ptr << endl;

    // Dereferencing ptr gives the value at index 0
    cout << *ptr << endl; // Output: 1

    // Pointer arithmetic: *(ptr + i) gives value at arr[i]
    cout << *(ptr + 1) << endl; // Output: 2
    cout << *(ptr + 2) << endl; // Output: 3
    cout << *(ptr + 3) << endl; // Output: 4
    cout << *(ptr + 4) << endl; // Output: 5

    // Alternatively, you can also use ptr[i] notation
    // Example: cout << ptr[2]; // Same as arr[2]

    return 0;
}
