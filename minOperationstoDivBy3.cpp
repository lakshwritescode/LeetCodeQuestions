#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int ans = 0;
        int n = nums.size();
        while (n--)
        {
            if (nums[n] % 3 != 0)
                ans++;
        }
        return ans;
    }
};