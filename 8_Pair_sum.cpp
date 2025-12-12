#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     vector<int> vec;
//     vector<int> arr = {2, 7, 11, 15, 20};
//     int n = arr.size();
//     int target = 27;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if ((arr[i] + arr[j]) == target)
//             {
//                 vec.push_back(i);
//                 vec.push_back(j);
//             }
//         }
//     }

//     cout << "The index are: " << endl;
//     for (int val : vec)
//     {
//         cout << val << ", ";
//     }
// }

vector<int> PairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;

    vector<int> ans = PairSum(nums, target);
    cout << ans[0] << ", " << ans[1];
}