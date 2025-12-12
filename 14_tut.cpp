// Peak Mountain Array

#include <iostream>
#include <vector>
using namespace std;

int peakMountainArray(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            return i;
        }
    }
}

int main()
{
    vector<int> nums = {2, 5, 7, 9, 12, 8, 6, 3};

    cout << "Peak value is at Index: " << peakMountainArray(nums) << endl;
}