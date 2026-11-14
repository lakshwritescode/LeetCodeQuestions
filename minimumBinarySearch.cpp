#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid = (high - low) / 2 + low;
        int ans = INT_MAX;

        while (low <= high)
        {
            if (nums[low] <= nums[mid])
            {
                ans = min(nums[low], ans);
                low = mid + 1;
            }
            else
            {
                ans = min(nums[mid], ans);
                high = mid - 1;
            }
            mid = (high - low) / 2 + low;
        }
        return ans;
    }
};