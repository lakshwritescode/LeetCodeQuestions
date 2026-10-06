#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int sum = 0;
        int digisum = 0;
        for (auto it : nums)
        {
            sum += it;
            while (it != 0)
            {
                int last = it % 10;
                digisum += last;
                it /= 10;
            }
        }
        return sum - digisum;
    }
};