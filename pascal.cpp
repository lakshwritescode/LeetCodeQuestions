#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<int> rows(int rows)
    {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for (int i = 1; i < rows; i++)
        {
            ans = ans * (rows - i);
            ans /= i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;

        for (int i = 1; i <= numRows; i++)
        {
            ans.push_back(rows(i));
        }
        return ans;
    }
};