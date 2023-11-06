#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getMaximumXor(vector<int> &a, int mx)
    {
        int k = (1 << mx) - 1;
        vector<int> ans;
        int x = 0;
        for (int i = 0; i < a.size(); i++)
        {
            /* code */
            x ^= a[i];
        }
        int i = a.size() - 1;
        while (i >= 0)
        {
            /* code */
            ans.push_back(k - x);
            x ^= a[i];
            i--;
        }
        return ans;
    }
};
