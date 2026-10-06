#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int reverseNum(int num)
    {
        int sum = 0;

        while (num != 0)
        {
            int last = num % 10;
            sum = sum * 10 + last;
            num = num / 10;
        }
        return sum;
    }

public:
    bool isSameAfterReversals(int num)
    {
        int number = reverseNum(num);
        number = reverseNum(number);
        return num == number;
    }
};