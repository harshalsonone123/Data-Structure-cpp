#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();

        for (int j = 0; j < m - 1; j++)
        {
            /* code */
            vector<int> temp;
            int c = j;
            int r = 0;
            while (c < m && r < n)
            {
                /* code */
                temp.push_back(mat[r++][c++]);
            }
            sort(temp.begin(), temp.end());
            c = j, r = 0;
            int count = 0;
            while (c < m && r < n)
            {
                /* code */
                mat[r++][c++] = temp[count++];
            }
        }
        for (int i = 1; i < n - 1; i++)
        {
            /* code */
            vector<int> temp;
            int r = i;
            int c = 0;
            while (c < m && r < n)
                temp.push_back(mat[r++][c++]);
            sort(temp.begin(), temp.end());
            r = i, c = 0;
            int count = 0;
            while (c < m && r < n)
                mat[r++][c++] = temp[count++];
        }
        return mat;
    }
}

;