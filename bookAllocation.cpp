#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
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
    int getSum(vector<int> &nums)
    {
        int sum = 0;
        for (auto it : nums)
        {
            sum += it;
        }
        return sum;
    }
    int students(vector<int> &nums, int students)
    {
        int pages = 0;
        int stu = 1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] + pages <= students)
            {
                pages += nums[i];
            }
            else
            {
                stu += 1;
                pages = nums[i];
            }
        }
        return stu;
    }

public:
    int splitArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (k > n)
            return -1;

        int low = getMax(nums);
        int high = getSum(nums);

        int mid = (high - low) / 2 + low;
        while (low <= high)
        {
            if (students(nums, mid) > k)
                low = mid + 1;
            else
                high = mid - 1;
            mid = (high - low) / 2 + low;
        }
        return low;
    }
};