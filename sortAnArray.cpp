#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void MS(vector<int> &nums, int low, int high)
    {
        if (low == high)
            return;
        int mid = (low + high) / 2;
        MS(nums, low, mid);
        MS(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }
    void merge(vector<int> &nums, int low, int mid, int high)
    {
        vector<int> ans;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high)
        {
            if (nums[left] <= nums[right])
            {
                ans.push_back(nums[left++]);
            }
            else
            {
                ans.push_back(nums[right++]);
            }
        }
        while (left <= mid)
        {
            ans.push_back(nums[left++]);
        }
        while (right <= high)
        {
            ans.push_back(nums[right++]);
        }

        for (int i = low; i <= high; i++)
        {
            nums[i] = ans[i - low];
        }
    }

public:
    vector<int> sortArray(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        MS(nums, low, high);
        return nums;
    }
};