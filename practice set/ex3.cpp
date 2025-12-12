// Printing smallest and largest number and its index from array:

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int nums[] = {23, 40, 67, 200, 19, 50, 89};
    int size = 7;
    int index;
    int index2;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            index = i;
        }

        if (nums[i] > largest)
        {
            largest = nums[i];
            index2 = i;
        }
    }

    cout << "Minimum no: " << smallest << " & its index: " << index << endl;
    cout << "Maximum no: " << largest << " & its index: " << index2 << endl;
}