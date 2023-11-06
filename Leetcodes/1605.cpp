#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> restoreMatrix(vector<int> &rowSum, vector<int> &colSum)
    {
        int n = rowSum.size();
        int m = colSum.size();
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = 0; j < m; j++)
            {
                /* code */
                int m = min(rowSum[i], colSum[j]);
                v[i][j] = m;
                rowSum[i] -= m;
                colSum[j] -= m;
            }
        }
        return v;
    }
};