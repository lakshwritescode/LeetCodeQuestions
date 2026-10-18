#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int reverse(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            int last = n % 10;
            sum = sum * 10 + last;
            n /= 10;
        }
        return sum;
    }

public:
    int mirrorDistance(int n)
    {
        int m = abs(n - reverse(n));
        return m;
    }
};