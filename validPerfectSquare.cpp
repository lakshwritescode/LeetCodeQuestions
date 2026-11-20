#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int low = 1;
        int high = num;

        int mid = (high - low) / 2 + low;

        while (low <= high)
        {
            long long prod = 1LL * mid * mid;
            if (prod < num)
                low = mid + 1;
            else if (prod > num)
                high = mid - 1;
            else
                return true;
            mid = (high - low) / 2 + low;
        }
        return false;
    }
};