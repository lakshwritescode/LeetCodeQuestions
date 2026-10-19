#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int averageValue(vector<int> &nums)
    {
        int count = 0;
        int sum = 0;

        for (auto it : nums)
        {
            if (it % 3 == 0 && it % 2 == 0)
            {
                count++;
                sum += it;
            }
        }
        if (count == 0)
            return 0;
        return sum / count;
    }
};