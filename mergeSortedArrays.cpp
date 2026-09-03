   
   #include<bits/stdc++.h>
   using namespace std;
   class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = 0  , j = 0;
    int k = 0;
    vector <int> arr3(m+n);
    while(i < m && j < n)
    {
        if(nums1[i] < nums2[j])
        {
            arr3[k] = nums1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = nums2[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        arr3[k] = nums1[i];
        k++;
        i++;
    }
    while (j < n)
    {
        arr3[k] = nums2[j];
        k++;
        j++;
    }
    for(int p = 0 ; p <(m+n) ; p++)
    {
        nums1[p] = arr3[p];
    }
    }
};