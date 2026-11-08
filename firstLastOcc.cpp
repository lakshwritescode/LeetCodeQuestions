#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int firstOcc(vector<int> &nums, int target)
    {
        int ans = -1;
        int low = 0;
        int high = nums.size() - 1;
        int mid = low + ((high - low) / 2);

        while (low <= high)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            mid = low + ((high - low) / 2);
        }
        return ans;
    }

    int secondOcc(vector<int> &nums, int target)
    {
        int ans = -1;
        int low = 0;
        int high = nums.size() - 1;
        int mid = low + ((high - low) / 2);

        while (low <= high)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            mid = low + ((high - low) / 2);
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = firstOcc(nums, target);
        int second = secondOcc(nums, target);

        return {first, second};
    }
};