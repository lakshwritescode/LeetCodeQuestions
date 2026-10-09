#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    bool isDiv(int n)
    {
        int og = n;
        while (og != 0)
        {
            int last = og % 10;
            if (last == 0)
                return false;
            if (n % last != 0)
                return false;
            og /= 10;
        }
        return true;
    }

public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;
        for (int i = left; i <= right; i++)
        {
            if (isDiv(i))
                ans.push_back(i);
        }
        return ans;
    }
};