#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int DaysTook(vector<int> &nums, int x, int days)
    {
        int sum = 0;
        int day = 1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (sum + nums[i] > x)
            {
                day += 1;
                sum = nums[i];
            }
            else
                sum += nums[i];
        }
        if (day <= days)
            return 1;
        return 0;
    }

public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int low = INT_MIN;
        int high = 0;

        for (auto it : weights)
        {
            if (it > low)
                low = it;
            high += it;
        }

        int mid = (high - low) / 2 + low;

        while (low <= high)
        {
            int daystook = DaysTook(weights, mid, days);
            if (daystook == 1)
                high = mid - 1;
            else
                low = mid + 1;
            mid = (high - low) / 2 + low;
        }
        return mid;
    }
};