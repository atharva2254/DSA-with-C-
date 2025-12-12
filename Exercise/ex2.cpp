#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int> &arr)
{
    int n = arr.size();

    int maxNum = INT32_MIN;
    int secondMax = INT32_MIN;

    for (int val : arr)
    {
        if (val > maxNum)
        {
            secondMax = maxNum;
            maxNum = val;
        }

        else if (val > secondMax && val != maxNum)
        {
            secondMax = val;
        }
    }

    return secondMax;
}

int main()
{
    vector<int> nums = {43, 22, 524, 31, 90};

    cout << "Second largest number: " << secondLargest(nums);
}