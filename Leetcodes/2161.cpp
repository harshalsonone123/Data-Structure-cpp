#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> v1;
        vector<int> v2;
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            /* code */
            if (nums[i] < pivot)
                v1.push_back(nums[i]);
            else if (nums[i] == pivot)
                count++;
            else
                v2.push_back(nums[i]);
        }
        while (count--)
        {
            /* code */
            v1.push_back(pivot);
        }
        for (int i = 0; i < v2.size(); i++)
        {
            /* code */
            v1.push_back(v2[i]);
        }
        return v1;
    }
};