#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int replaceZerosWithOnes(int N)
    {
        // Your code goes here
        int ans = 0;
        int place = 1;
        while (N != 0)
        {
            int last = N % 10;
            if (last == 0)
                last = 1;
            ans = ans + last * place;
            place *= 10;
            N /= 10;
        }
        return ans;
    }
};
