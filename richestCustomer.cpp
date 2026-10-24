#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int maxi = 0;
        int sum = 0;
        int m = accounts.size();

        for (int i = 0; i < m; i++)
        {
            int n = accounts[i].size();
            for (int j = 0; j < n; j++)
            {
                sum += accounts[i][j];
            }
            maxi = max(maxi, sum);
            sum = 0;
        }
        return maxi;
    }
};