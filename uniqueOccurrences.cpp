#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {

        map<int, int> mp;
        set<int> seen;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        for (auto it : mp)
        {
            if (seen.count(it.second))
                return false;

            seen.insert(it.second);
        }
        return true;
    }
};