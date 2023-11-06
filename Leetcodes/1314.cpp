#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k)
    {
        int row = mat.size();
        int col = mat[0].size();
        vector<vector<int>> ans(row, vector<int>(col));
        for (int i = 0; i < row; i++)
        {
            /* code */
            for (int j = 0; j < col; j++)
            {
                /* code */
                int s = 0;
                for (int l = (i - k < 0 ? 0 : i - k); l <= (i + k > row - 1 ? row - 1 : i + k); l++)
                {
                    /* code */
                    for (int m = (j - k < 0 ? 0 : j - k); m <= (j + k > col - 1 ? col - 1 : j + k); m++)
                    {
                        /* code */
                        s = s + mat[l][m];
                    }
                }
                ans[i][j] = s;
            }
        }
        return ans;
    }
};