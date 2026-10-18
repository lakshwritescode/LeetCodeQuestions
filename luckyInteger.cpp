#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        int lucky = -1;
        for (auto it : mp)
        {

            if (it.first == it.second)
                lucky = it.first;
        }
        return lucky;
    }
};