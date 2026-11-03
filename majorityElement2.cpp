#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int count1 = 0;
        int count2 = 0;
        int el1, el2;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (count1 == 0 && el2 != nums[i])
            {
                count1++;
                el1 = nums[i];
            }
            else if (count2 == 0 && el1 != nums[i])
            {
                count2++;
                el2 = nums[i];
            }
            else if (nums[i] == el1)
                count1++;
            else if (nums[i] == el2)
                count2++;
            else
            {
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        count1 = 0;
        count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (el1 == nums[i])
                count1++;
            if (el2 == nums[i])
                count2++;
        }
        int mini = (int)n / 3 + 1;
        if (count1 >= mini)
            ans.push_back(el1);
        if (count2 >= mini)
            ans.push_back(el2);

        return ans;
    }
};