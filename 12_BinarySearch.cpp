// Binary Search Algoriothm

#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &nums, int target)
{
    int n = nums.size();
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + ((end - st) / 2);
        if (target < nums[mid])
        {
            end = mid - 1;
        }
        else if (target > nums[mid])
        {
            st = mid + 1;
        }

        else
        {
            return mid;
        }
    }
    return -1;
};

// Binary Search using recursion:
int RecursiveBS(vector<int> &nums, int target, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target < nums[mid])
        {
            return RecursiveBS(nums, target, st, mid - 1);
        }
        else if (target > nums[mid])
        {
            return RecursiveBS(nums, target, mid + 1, end);
        }

        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {
        3, 7, 12, 18, 24, 29, 35, 39, 41, 45,
        47, 52, 56, 59, 63, 68, 71, 74, 78, 81,
        85, 89, 91, 95, 98, 102, 105, 108, 112, 117,
        119, 123, 127, 130, 135, 138, 141, 144, 148, 151,
        154, 158, 162, 165, 169, 173, 175, 179, 182, 185,
        188, 192, 195, 198, 202, 205, 208, 211, 214, 217,
        220, 224, 228, 231, 235, 238, 242, 245, 248, 251,
        254, 257, 260, 264, 267, 270, 274, 278, 281, 284,
        288, 292, 295, 298, 302, 305, 309, 312, 315, 318,
        321, 324, 327, 330, 333, 336, 339, 342, 345, 348};

    int target = 135;
    int st = 0, end = nums.size() - 1;
    int ans1 = BinarySearch(nums, target);
    int ans2 = RecursiveBS(nums, target, st, end);

    if (ans2 == -1)
    {
        cout << "Target not found!" << endl;
    }
    else
    {
        cout << "Target found at index: " << ans2;
    }

    return 0;
}