#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int low = 0;
        int high = arr.size() - 1;

        int mid = (high - low) / 2 + low;

        while (low <= high)
        {
            int missing = arr[mid] - (mid + 1);
            if (missing < k)
                low = mid + 1;
            else
                high = mid - 1;
            mid = (high - low) / 2 + low;
        }
        return low + k;
    }
};