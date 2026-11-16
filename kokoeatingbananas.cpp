#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int getHours(vector<int> &nums, int n, int time)
    {
        long long hours = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            hours += ceil((double)nums[i] / (double)n);
        }
        if (hours <= time)
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
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int maxi = getMax(piles);

        int low = 1;
        int high = maxi;
        int mid = (high - low) / 2 + low;
        int ans = maxi;
        while (low <= high)
        {
            long long hours = getHours(piles, mid, h);
            if (hours == 1)
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
            mid = (high - low) / 2 + low;
        }
        return ans;
    }
};