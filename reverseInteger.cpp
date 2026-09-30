#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long num = 0;
        while (x != 0)
        {
            int last = x % 10;
            num = (num * 10) + last;
            x = x / 10;
        }
        if (num > INT_MAX || num < INT_MIN)
            return 0;
        return num;
    }
};