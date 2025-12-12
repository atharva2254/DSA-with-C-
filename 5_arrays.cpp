#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int nums[5] = {20, 50, 5, 34, 39};
    int size = 5;
    // Printing smallest and largest number from array:

    for (int val : nums) // This is for each loop to print values in array
    {
        cout << val << " ";
    }
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // if (nums[i] < smallest)
        // {
        //     smallest = nums[i];
        // }
        // Another way using min/max function:

        smallest = min(nums[i], smallest); // This returns minimum value between nums and smallest
        largest = max(nums[i], largest);   // This returns maximum value between nums and smallest
    }

    cout << "Smallest no: " << smallest << endl;
    cout << "Largest number: " << largest << endl;
}