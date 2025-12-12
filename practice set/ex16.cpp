#include <iostream>
#include <vector>
using namespace std;

int isPrime(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j * j < i; j++)
        {
            if (nums[i] % j != 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}

int main()
{
    vector<int> nums;
    for (int i = 1; i < 51; i++)
    {
        nums.push_back(i);
    }

    isPrime(nums);
}