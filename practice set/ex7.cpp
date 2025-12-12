// Swapping Minimum and maximum number from array:
#include <iostream>
#include <climits>
using namespace std;

int Min_Max_Swap(int arr[], int sz)
{
    int minimum = INT_MAX, maximum = INT_MIN;
    int index1, index2;

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
            index1 = i;
        }

        if (arr[i] > maximum)
        {
            maximum = arr[i];
            index2 = i;
        }
    }
    swap(arr[index1], arr[index2]);
}
int main()
{
    int arr[] = {23, 4, 97, 32, 189};
    int sz = 5;

    cout << "Before swapping: ";
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }

    Min_Max_Swap(arr, sz);
    cout << "\nAfter swapping:  ";
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
}