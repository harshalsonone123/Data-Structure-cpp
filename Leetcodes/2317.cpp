#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumXOR(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            /* code */
            ans |= nums[i];
        }
        return ans;
    }
};