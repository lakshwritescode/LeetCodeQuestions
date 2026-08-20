#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> OptimaltwoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        int left = 0;
        int right = n - 1;

        sort(nums.begin(), nums.end());
        while (left < right)
        {
            int sum = nums[left] + nums[right];
            if (sum == target)
            {
                return {left, right};
            }

            else if (sum < target)
            {
                left++;
            }

            else
            {
                right--;
            }
        }
        return {-1, -1};
    }
};

vector<int> twoSum(vector<int> &nums, int target) //better approach
{
    map<int, int> mpp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int num = nums[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) // traverse thru map until the number needed is not found
        {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

vector<int> brute_twoSum(int arr[] , int n , int target)
{   

    
    for(int i = 0; i < n ; i++)
    {
        for(int j = i+1 ; j <n;j++)
        {
            if(arr[i] + arr[j] == target)
            {
                return {arr[i] , arr[j]} ;
            }
        }
    }
    return {};
}

int main()
{
    int arr[5] = {2,6,5,8,11};
    int target = 14;
    // vector<int> ans = brute_twoSum( arr ,5, target);
    // cout << ans[0] << " "<< ans[1];

    return 0;
}