#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        int sum = 0;
        for (int i = 1; i < sqrt(num); i++)
        {
            if (num % i == 0)
            {
                sum += i + num / i;
            }
        }
        sum -= num;
        return sum == num;
    }
};