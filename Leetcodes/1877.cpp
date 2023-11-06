#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j = n - 1, res = INT_MIN;
        while (i <= j)
        {
            /* code */
            res = max(nums[i] + nums[j], res);
            i++;
            j--;
        }
        return res;
    }
};