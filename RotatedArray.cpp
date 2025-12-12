// Binary Search on Rotated Array

#include <iostream>
#include <vector>
using namespace std;

int BSORA(vector<int> &nums, int target)
{
    int st = 0, end = nums.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        if (st <= mid)
        { // Left array is sorted;
            if (nums[st] <= target && target <= nums[mid])
            {
                end = mid - 1;
            }
            else
                st = mid + 1;
        }

        else
        {
            if (nums[mid] <= target && target <= nums[end])
            {
                st = mid + 1;
            }
            else
                end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> rotated_array = {4, 5, 6, 7, 0, 1, 2, 3};
    int target = 3;

    cout << "Target Found at index: ";
    cout << BSORA(rotated_array, target) << endl;
}