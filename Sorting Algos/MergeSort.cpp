#include <iostream>
using namespace std;

int mergeSort(int arr1[], int arr2[], int m, int n)
{
    int indx = m + n - 1, i = m - 1, j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (arr1[i] >= arr2[j])
        {
            arr1[indx] = arr1[i];
            i--;
            j--;
            indx--;
        }
        else
        {
            arr1[indx] = arr2[j];
        }
    }
}