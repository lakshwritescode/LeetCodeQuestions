#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto it : nums)
        {
            string s = to_string(it);
            if(s.length() % 2 == 0) count++;
        }
        return count;
    }
};