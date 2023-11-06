#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int n = bank.size(), m = bank[0].size();
        int k, j1 = 0, j2 = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            k = 0;
            for (int j = 0; j < m; j++)
            {
                /* code */
                if (bank[i][j] == '1')
                    k++;
            }
            if (k != 0)
            {
                j1 = j2;
                j2 = k;
                ans += j1 * j2;
            }
        }
        return ans;
    }
};