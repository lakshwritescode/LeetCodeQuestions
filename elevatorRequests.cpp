#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int elevatorRequests(int n, vector<int> &requests)
    {
        int st = 0;
        int sum = 0;
        for (int i = 0; i < requests.size(); i++)
        {
            sum += abs(requests[i] - st);
            st = requests[i];
        }
        return sum;
    }
};