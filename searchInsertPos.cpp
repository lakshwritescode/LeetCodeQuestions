#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < target)
                ans = i + 1;
            if (nums[i] > target)
                break;
        }
        return ans;
    }
};
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid = (high - low) / 2 + low;

        while (low <= high)
        {
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
            mid = (high - low) / 2 + low;
        }

        return mid;
    }
};