// BUBBLE SORT ALGORITHM:
// Swaps the adjacent element according to accending or descending order.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort:
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestInx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestInx])
            {
                smallestInx = j;
            }
        }
        swap(arr[i], arr[smallestInx]);
    }
}

// Insertion Sort:
void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int currIdx = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > currIdx)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = currIdx;
    }
}

int main()
{
    // int arr[] = {17, 31, 23, 8, 6, 12, 34, 56, 32, 89, 45, 98, 2, 1, 4};
    int arr[] = {1, 2, 1, 1, 0, 0, 2, 0, 1, 2};
    int n = 10;

    bubbleSort(arr, n);
    // selectionSort(arr, n);
    // insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}