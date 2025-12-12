// Pointers in C++

// A pointer is a special variable that stores the memory address of another variable.
//  The Address is always in hexadecimal means from 1-9 then a-f (16);

#include <iostream>
using namespace std;

// int main()
// {
//     int a = 10;
//     int b = 20;

//     int *ptr = &a;     // Stores the address of variable a
//     int *ptr2 = &b;    // Stores the address of variable b
//     int **ptr3 = &ptr; // Pointer to pointer (stores address of ptr)

//     cout << "Value of a: " << a << endl;
//     cout << "Address of a (&a): " << &a << endl;
//     cout << "Value stored in ptr (address of a): " << ptr << endl;
//     cout << "Value at ptr's address (*ptr): " << *ptr << endl; // Dereferencing
//     cout << "Value at ptr2's address (*ptr2): " << *ptr2 << endl;

//     // Double Pointer
//     cout << "Value stored in ptr3 (address of ptr): " << ptr3 << endl;
//     cout << "Value at ptr3's address (*ptr3 = ptr): " << *ptr3 << endl;
//     cout << "Value at address pointed by *ptr3 (**ptr3 = a): " << **ptr3 << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Pass By Reference:

// // 1. Using Pointer
// void UsingPointer(int *a)
// {
//     *a = 20; // Dereferencing and assigning new value
// }

// // 2. Using Reference
// void UsingAlias(int &a) // Reference variable acts as an alias
// {
//     a = 20;
// }

// int main()
// {
//     // Pointer:
//     cout << "Using Pointer:" << endl;
//     int a = 10;
//     cout << "Before: " << a << endl;
//     UsingPointer(&a); // Pass address
//     cout << "After: " << a << endl;

//     // Alias:
//     cout << "\nUsing Reference (Alias):" << endl;
//     int b = 10;
//     cout << "Before: " << b << endl;
//     UsingAlias(b); // Pass by reference
//     cout << "After: " << b << endl;

//     return 0;
// }

// Pointer Arithmatic:

int main()
{
    int a = 10;
    int b = 20;
    int *ptr = &a;
    int *ptr2 = &b;

    cout << ptr << endl;
    cout << ptr2 << endl;
    // (1 integer is of 4 Bytes)
    // ptr++;  // Increases by 1 integer i.e 4 Bytes eg: if address is 100 then after increment address will be 104
    // ptr2--; // Decreases by 1 integer i.e 4 Bytes eg: if address is 100 then after Decrement address will be 96

    ptr = ptr + 2;   // adds 2 integers instead of one i.e 8 Bytes
    ptr2 = ptr2 - 2; // subtracts 3 integers instead of one i.e 12 Bytes
    cout << ptr << endl;
    cout << ptr2 << endl;
}