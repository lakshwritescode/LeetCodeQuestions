#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int sum = 0;

        for (char c : columnTitle)
        {
            int num = c - 'A' + 1;
            sum = sum * 26 + num;
        }

        return sum;
    }
};