#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid = (high - low) / 2 + low;

        while (low <= high)
        {
            if (mid % 2 == 0)
            {
                if (nums[mid] == nums[mid + 1])
                    low = mid + 1;
                else
                    high = mid - 1;
            }

            else
            {
                if (nums[mid] == nums[mid + 1])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            mid = (high - low) / 2 + low;
        }
        return nums[mid];
    }
};