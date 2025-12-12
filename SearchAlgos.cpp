#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(vector<int> &nums, int target)
{
    int n = nums.size();
    int st = 0;
    int end = n - 1;
    int insert;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        // vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 10, 11};
        if (nums[mid] == target)
        {
            return mid;
        }

        else if (nums[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return st;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 9, 10, 11};
    int target;
    cout << "Enter target:" << endl;
    cin >> target;

    // cout << "Linear Search: Target is at " << linearSearch(nums, target) << endl;
    cout << "Binary Search: Target is at " << binarySearch(nums, target) << endl;
}