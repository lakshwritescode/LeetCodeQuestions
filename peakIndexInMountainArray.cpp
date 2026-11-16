#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int low = 0;
        int high = arr.size() - 1;
        if (low == high)
            return arr[low];
        int mid = (high - low) / 2 + low;

        while (low <= high)
        {
            if (mid > low && mid < high)
            {
                if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
                    return mid;
                else if (arr[mid] < arr[mid + 1])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            else
            {
                if (arr[low] > arr[high])
                    return low;
                else
                    return high;
            }
            mid = (high - low) / 2 + low;
        }
        return mid;
    }
};