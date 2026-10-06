#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int gcdn(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

public:
    int findGCD(vector<int> &nums)
    {
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for (auto it : nums)
        {
            if (it < mini)
                mini = it;
            if (it > maxi)
                maxi = it;
        }
        int gcdnum = gcdn(mini, maxi);
        return gcdnum;
    }
};