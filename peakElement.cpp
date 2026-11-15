#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        if (low == high)
            return 0;
        int mid = (high - low) / 2 + low;

        while (low <= high)
        {
            if (mid > 0 && mid < high)
            {
                if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                    return mid;
                else if (nums[mid] > nums[mid - 1] && nums[mid] < nums[mid + 1])
                    low = mid + 1;
                else
                    high = mid - 1;
                mid = (high - low) / 2 + low;
            }
            else
            {
                if (nums[low] > nums[high])
                    return low;
                else
                    return high;
            }
        }
        return mid;
    }
};