// Assign C Cows in N stalls such that minimum distance between them is largest possible. Return largest minimum distance;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> &arr, int n, int c, int distanceAllowed)
{
    int cows = 1, lastPosition = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastPosition >= distanceAllowed)
        {
            cows++;
            lastPosition = arr[i];
        }
        if (cows == c)
            return true;
    }

    return false;
}

int minLargestDistance(vector<int> &arr, int n, int c)
{
    sort(arr.begin(), arr.end());
    int st = 1, max_distance = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        max_distance = max(max_distance, arr[i]);
    }

    int end = arr[n - 1] - arr[0], ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, c, mid))
        {
            st = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = 5, c = 3;
    cout << minLargestDistance(arr, n, c);
}