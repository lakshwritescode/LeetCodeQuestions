#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int maxi = 0;
        int smaxi = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > maxi)
            {
                smaxi = maxi;
                maxi = nums[i];
            }
            else if (nums[i] <= maxi && nums[i] > smaxi)
                smaxi = nums[i];
        }
        int prod = (maxi - 1) * (smaxi - 1);
        return prod;
    }
};