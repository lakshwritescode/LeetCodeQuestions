#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int sumDivisibleByK(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (auto it : nums)
        {
            mp[it]++;
        }
        int sum = 0;
        for (auto it : mp)
        {
            if (it.second % k == 0)
                sum += it.first * it.second;
        }
        return sum;
    }
};