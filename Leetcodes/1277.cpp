#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isvalid(int i, int j, int m, int n)
    {
        if (i < 0 || j < 0 || i > m || j > n)
            return false;
        return true;
    }
    int countSquares(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            /* code */
            for (int j = 0; j < n; j++)
            {
                /* code */
                if (matrix[i][j] == 0)
                    continue;
                else
                {
                    int top = 0, left = 0, dig = 0;
                    if (isvalid(i - 1, j, m, n))
                        top = matrix[i - 1][j];
                    if (isvalid(i, j - 1, m, n))
                        left = matrix[i][j - 1];
                    if (isvalid(i - 1, j - 1, m, n))
                        dig = matrix[i - 1][j - 1];

                    matrix[i][j] = min(min(top, left), dig) + 1;

                    ans = ans + matrix[i][j];
                }
            }
        }
        return ans;
    }
};