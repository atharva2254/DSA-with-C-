#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int Frequency(vector<int> &nums)
{
    unordered_map<int, int> freq;

    for (int num : nums)
    {
        freq[num]++;
    }

    cout << "Number\tFrequency" << endl;
    for (auto &it : freq)
    {
        if (it.second > 1)
        {
            cout << it.first << "\t" << it.second << endl;
        }
    }
}

int main()
{
    vector<int> nums = {1, 1, 2, 4, 2, 7, 4, 3, 2};
    Frequency(nums);
}