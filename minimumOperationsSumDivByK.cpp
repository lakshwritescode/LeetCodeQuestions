#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int sum = 0;

        for (auto it : nums)
            sum += it;
        return sum % k;
    }
};