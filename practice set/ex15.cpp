#include <iostream>
#include <vector>

using namespace std;

int peakElement(vector<int> &nums)
{
    vector<int> peak;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
        {
            peak.push_back(nums[i]);
        }
    }

    int peakElement;
    for (int i = 0; i < peak.size(); i++)
    {
        peakElement = max(peak[i], 0);
    }

    return peakElement;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 3, 12, 5, 6, 7, 2};
    cout << peakElement(vec);
}