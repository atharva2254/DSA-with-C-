// Calculate sum and product of array

#include <iostream>
using namespace std;

int Operation(int arr[], int sz)
{
    int product = 1;
    int sum = 0;

    for (int i = 0; i < sz; i++)
    {
        product *= arr[i];
        sum += arr[i];
    }

    cout << "Sum of array: " << sum << endl;
    cout << "Product of array: " << product << endl;
}

int main()
{
    int arr[] = {2, 5, 8, 6, 4, 3};
    int sz = 6;

    Operation(arr, sz);
}