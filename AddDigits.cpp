#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int sum = 0;

        while(num >= 10)
        {
            int fdigit = num/10;
            int ldigit = num%10;
            sum = fdigit + ldigit;
            num = sum;
        }

        return num;
    }
};
class Solution2
{
public:
    int addDigits(int num)
    {
        if (num < 10)
            return num;
        int n = num % 10;
        int sum = n + addDigits(num / 10);

        return addDigits(sum);
    }
};