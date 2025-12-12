#include <iostream>
#include <vector>
using namespace std;

int minMax(vector<int> &arr)
{
    int n = arr.size();

    int maxNum = INT32_MIN;
    int minNum = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        // maxNum = max(arr[i], maxNum);
        // minNum = min(arr[i], minNum);

        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }

        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }

    cout << "Largest element: " << maxNum << "\nSmallest element: " << minNum << endl;
}

int main()
{
    vector<int> nums = {43, 22, 524, 31, 90};

    minMax(nums);
}