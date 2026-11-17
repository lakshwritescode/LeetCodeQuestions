#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int getSum(vector<int> &nums, int x, int limit)
    {
        long long sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += ceil((double)nums[i] / (double)x);
        }
        if (sum <= limit)
            return 1;
        return 0;
    }
    int getMax(vector<int> &nums)
    {
        int maxi = INT_MIN;
        for (auto it : nums)
        {
            if (it > maxi)
                maxi = it;
        }
        return maxi;
    }

public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int maxi = getMax(nums);
        int low = 1;
        int high = maxi;

        int mid = (high - low) / 2 + low;

        while (low <= high)
        {
            int sum = getSum(nums, mid, threshold);
            if (sum == 1)
                high = mid - 1;
            else
                low = mid + 1;
            mid = (high - low) / 2 + low;
        }
        return mid;
    }
};