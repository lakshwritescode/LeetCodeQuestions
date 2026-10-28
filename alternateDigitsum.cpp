#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int alternateDigitSum(int n)
    {
        string s = to_string(n);

        int sum = 0;

        for (int i = 0; i < s.length(); i++)
        {
            int num = s[i] - '0';
            if (i % 2 == 0)
            {
                sum += num;
            }
            else
            {
                sum -= num;
            }
        }
        return sum;
    }
};