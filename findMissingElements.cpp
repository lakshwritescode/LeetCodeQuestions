#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findMissingElements(vector<int> &nums)
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for (auto it : nums)
        {
            if (it < mini)
                mini = it;
            if (it > maxi)
                maxi = it;
        }
        vector<int> ans;
        for (int i = mini; i <= maxi; i++)
        {
            if (find(nums.begin(), nums.end(), i) == nums.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};