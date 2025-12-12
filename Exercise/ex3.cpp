#include <iostream>
using namespace std;

int reverseArray(int arr[], int n)
{
    int st = 0, end = n - 1;
    while (st < end)
    {
        swap(arr[st], arr[end]);
        st++, end--;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    reverseArray(arr, 5);
    for (int val : arr)
    {
        cout << val << " ";
    }
}