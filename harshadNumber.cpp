#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int sumOfTheDigitsOfHarshadNumber(int x)
    {
        int sum = 0;
        int og = x;

        while (og != 0)
        {
            int last = og % 10;
            sum += last;
            og /= 10;
        }
        if (x % sum == 0)
            return sum;
        else
            return -1;
    }
};