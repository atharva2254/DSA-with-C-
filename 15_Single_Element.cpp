#include <iostream>
#include <vector>

using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int st = 0;
    int n = nums.size();
    int end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] < target)
        {
            st = mid + 1;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }

        else if (nums[mid] == target)
        {
            if (nums[mid] == nums[mid + 1])
            {
                return {mid, mid + 1};
            }
            else if (nums[mid] == nums[mid - 1])
            {
                return {mid - 1, mid};
            }
        }
    }

    return {-1, -1};
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 0;

    vector<int> res = searchRange(nums, target);
    cout << res[0] << " " << res[1];
}