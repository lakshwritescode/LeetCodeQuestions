#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int sumdigit(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

public:
    int minElement(vector<int> &nums)
    {
        int mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = sumdigit(nums[i]);
            if (nums[i] < mini)
                mini = nums[i];
        }

        return mini;
    }
};