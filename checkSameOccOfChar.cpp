#include<bits/stdc++.h>
using namespace std;

class Solution
{

public:
    bool areOccurrencesEqual(string s)
    {

        map<char, int> mp;
        for (auto it : s)
        {
            mp[it]++;
        }

        int first = mp[s[0]];
        for (auto it : mp)
        {
            if (it.second != first)
                return false;
        }

        return true;
    }
};