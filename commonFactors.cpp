#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int commonFactors(int a, int b)
    {
        int cnt = 0;
        if (a > b)
            swap(a, b);
        for (int i = 1; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                if (b % i == 0)
                    cnt++;

                if (a / i != i && b % (a / i) == 0)
                    cnt++;
            }
        }
        return cnt;
    }
};