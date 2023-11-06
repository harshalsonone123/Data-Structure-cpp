#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> p, n;
        for (int x : nums)
        {
            if (x < 0)
                n.push_back(x);
            else
                p.push_back(x);
        }
        vector<int> ans;
        for (int i = 0; i < nums.size() / 2; i++)
        {
            /* code */
            ans.push_back(p[i]);
            ans.push_back(n[i]);
        }
        return ans;
    }
};