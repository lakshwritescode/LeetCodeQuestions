#include <bits/stdc++.h>
using namespace std;

int bruteMajorityElement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > n / 2)
            return arr[i];
    }
    return -1;
}

int betterMajorityElement(int arr[], int n)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > n / 2)
            return it.first;
    }
    return -1;
}

int optimalMajorityElement(int arr[], int n)
{
    int count = 0;
    int elem = 0;

    for (int i = 0; i < n; i++)
    {

        if (count == 0)
        {
            elem = arr[i];
        }
        else if (arr[i] == elem)
        {
            count++;
        }
        else
            count--;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == elem)
            cnt++;
    }
    if (cnt > n / 2)
        return elem;
    return -1;
}

int main()
{
    int n = 16;
    int arr[n] = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};

    cout << betterMajorityElement(arr, n);

    return 0;
}