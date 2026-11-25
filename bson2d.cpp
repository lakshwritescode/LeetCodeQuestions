#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int index = (m * n);

        int low = 0;
        int high = index - 1;
        int mid = (high - low) / 2 + low;

        while (low <= high)
        {
            if (matrix[mid / m][mid % m] == target)
                return true;
            else if (matrix[mid / m][mid % m] < target)
                low = mid + 1;
            else
                high = mid - 1;
            mid = (high - low) / 2 + low;
        }
        return false;
    }
};