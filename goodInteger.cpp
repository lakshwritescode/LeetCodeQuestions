#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkGoodInteger(int n)
    {
        int digitsum = 0;
        int squaresum = 0;

        while (n != 0)
        {
            int last = n % 10;
            digitsum += last;
            squaresum = squaresum + last * last;
            n = n / 10;
        }

        if (squaresum - digitsum >= 50)
            return true;
        else
            return false;
    }
};