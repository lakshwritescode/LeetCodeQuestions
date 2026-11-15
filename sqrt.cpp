#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        int low = 1;
        int high = x;
        while (low <= high)
        {
            int mid = (high - low) / 2 + low;
            long long product = 1LL * mid * mid;
            if (product <= x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return high;
    }
};