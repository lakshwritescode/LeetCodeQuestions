#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string toLowerCase(string s)
    {
        for (char &c : s)
        {
            if (c >= 'A' && c <= 'Z')
            {
                c = c + 32;
                // c = c + ('a' - 'A');
            }
        }
        return s;
    }
};