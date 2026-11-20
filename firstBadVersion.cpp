#include<bits/stdc++.h>
using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    bool isBadVersion(int n)
    {
        //dummy function
        return true;
    }
    int firstBadVersion(int n)
    {
        int low = 1;
        int high = n;
        int mid = (high - low) / 2 + low;

        while (low <= high)
        {
            if (isBadVersion(mid) == true)
                high = mid - 1;
            else
                low = mid + 1;
            mid = (high - low) / 2 + low;
        }
        return mid;
    }
};