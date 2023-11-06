#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {
        vector<bool> p;
        for (int i = 0; i < l.size(); i++)
        {
            /* code */
            vector<int> q(nums.begin() + l[i], nums.begin() + 1 + r[i]);
            sort(q.begin(), q.end());
            int x = q[1] - q[0], k = 0;
            for (int i = 2; i < q.size(); i++)
            {
                /* code */
                if (q[i] - q[i - 1] != x)
                {
                    k = 1;
                    break;
                }
            }
            k == 1 ? p.push_back(false) : p.push_back(true);
        }
        return p;
    }
};