#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int duplicateNumbersXOR(vector<int> &nums)
    {
        int xorn = 0;
        map<int, int> mp;
        for (auto it : nums)
            mp[it]++;

        for (auto it : mp)
        {
            if (it.second == 2)
                xorn ^= it.first;
        }
        return xorn;
    }
};