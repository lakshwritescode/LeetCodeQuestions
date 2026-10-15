#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        double k = celsius + 273.15;
        double fah = celsius * 1.80 + 32.00;
        vector<double> v = {k, fah};
        return v;
    }
};