#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string t = s;
        for (int i = 0; i < indices.size(); i++)
        {
            t[indices[i]] = s[i];
        }
        return t;
    }
};