// Reversing an array

#include <iostream>
using namespace std;

void Reverse_arr(int arr[], int sz)
{
    int start = 0, end = sz - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {23, 76, 33, 43, 21};
    int sz = 5;

    cout << "Original array: ";
    for (int i = 0; i < 5; i++)
    {

        cout << arr[i] << " ";
    }

    Reverse_arr(arr, sz);

    cout << "\nReversed array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}