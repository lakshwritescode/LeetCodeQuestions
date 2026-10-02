#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkDivisibility(int n)
    {
        int digitsum = 0;
        int digitprod = 1;
        int og = n;
        while (n != 0)
        {
            int last = n % 10;
            digitsum += last;
            digitprod *= last;
            n = n / 10;
        }
        int finalsum = digitsum + digitprod;
        if (og % finalsum == 0)
            return true;
        return false;
    }
};