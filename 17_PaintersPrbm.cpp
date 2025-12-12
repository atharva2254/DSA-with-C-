#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int timeAllowed)
{
    int painter = 1, time = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] + time <= timeAllowed)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    return painter <= m;
}

int minTime(int arr[], int n, int m)
{
    int sum = 0, max_time = INT32_MIN;

    if (m > n)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        max_time = max(max_time, arr[i]);
    }

    int st = max_time, end = sum, ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, m, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[6] = {21, 54, 20, 45, 10, 25};
    int n = 6, m = 2;

    cout << minTime(arr, n, m) << endl;
}