#include <iostream>
#include <vector>

using namespace std;

// Using O(n) complexity;
int singleElement(vector<int> &nums)
{
    int left = 0;

    while (left < nums.size())
    {
        if (nums[left] != nums[left + 1])
        {
            return nums[left];
        }
        else if (nums[left] == nums[left + 1])
        {
            left += 2;
        }
    }
    return nums[nums.size() - 1];
}

// Using O(log n)
int singleElement1(vector<int> &nums)
{
    int n = nums.size();
    int st = 0, end =  n-1;

    while(st <=end){
        int mid = st + (end-st)/2;

        if(nums[mid] == nums[mid+1]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
}

int singleElement2(vector<int>&nums){
    int n = nums.size();
    
    // vector<int> nums = {1, 2, 1, 3, 4, 5, 4, 3, 5};
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
        
            
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 1, 3, 4, 5, 4, 3, 5};

    cout << singleElement(nums) << endl;
}