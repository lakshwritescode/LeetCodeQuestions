#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int possible(vector<int> &nums, int x, int m, int k)
    {
        int count = 0;
        int boq = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] <= x)
                count++;
            else
            {
                boq += count / k;
                count = 0;
            }
        }
        boq += count / k;
        if (boq >= m)
            return 1;
        return 0;
    }

public:
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int low = INT_MAX;
        int high = INT_MIN;
        int n = bloomDay.size();

        for (auto it : bloomDay)
        {
            if (it > high)
                high = it;
            if (it < low)
                low = it;
        }

        int mid = (high - low) / 2 + low;
        int ans = -1;
        while (low <= high)
        {
            if (possible(bloomDay, mid, m, k) == 1)
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