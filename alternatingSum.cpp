#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int alternatingSum(vector<int> &nums)
    {
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (i % 2 == 0)
                sum += nums[i];
            else
                sum -= nums[i];
        }
        return sum;
    }
};