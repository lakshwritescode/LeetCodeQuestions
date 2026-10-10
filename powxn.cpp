#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    double solve(double x, long long n)
    {
        if (n == 0)
            return 1.0;
        if (n < 0)
            return 1.0 / solve(x, -n);
        if (n % 2 == 0)
            return solve(x * x, n / 2);
        return x * solve(x * x, (n - 1) / 2);
    }

public:
    double myPow(double x, int n)
    {
        return solve(x, (long long)n);
    }
};