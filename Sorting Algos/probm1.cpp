// Dutch National Flag algorithm:
// Sorting 0s, 1s, 2s:

#include <iostream>
using namespace std;

void DNF(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[high], arr[mid]);
            high--;
            break;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 0, 0, 1, 2, 2, 1};
    int n = 8;

    DNF(arr, n);

    for (int val : arr)
    {
        cout << val << " ";
    }
}