#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countDigits(int num)
    {
        int count = 0;
        int og = num;
        while (og != 0)
        {
            int last = og % 10;
            if (last != 0 && num % last == 0)
                count++;
            og = og / 10;
        }
        return count;
    }
};