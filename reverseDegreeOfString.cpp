#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverseDegree(string s)
    {
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int n = s[i] - 'a';
            sum += n * i;
        }
        return sum;
    }
};