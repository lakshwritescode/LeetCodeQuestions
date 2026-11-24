#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int firstNeg(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int mid = (high - low) / 2 + low;
            if (nums[mid] >= 0)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
    int firstPos(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int mid = (high - low) / 2 + low;
            if (nums[mid] <= 0)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }

public:
    int maximumCount(vector<int> &nums)
    {
        int firstOccOfNeg = firstNeg(nums);
        int firstOccofPos = firstPos(nums);
        firstOccofPos = nums.size() - firstOccofPos;
        return max(firstOccOfNeg, firstOccofPos);
    }
};