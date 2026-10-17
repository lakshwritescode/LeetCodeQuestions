#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findClosest(int x, int y, int z)
    {
        int step1 = abs(x - z);
        int step2 = abs(y - z);

        if (step1 < step2)
            return 1;
        else if (step1 == step2)
            return 0;
        else
            return 2;
    }
};