// Linear Search Algorithm

#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {20, 90, 44, 67, 43, 68, 86};
    int size = 7;
    int target;
    cout << "Enter number to search: \n";
    cin >> target;

    int algo = linear_search(arr, size, target);
    if (algo == -1)
    {
        cout << "Number not found!" << endl;
    }
    else
    {
        cout << "Number Found at index: " << algo;
    }
}