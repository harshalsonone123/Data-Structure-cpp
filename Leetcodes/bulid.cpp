class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
    {

        vector<int> r(grid.size()), c(grid.size());
        for (int i = 0; i < grid.size(); i++)
        {
            /* code */
            for (int j = 0; i < grid.size(); j++)
            {
                /* code */
                r[i] = max(r[i], grid[i][j]);
                c[j] = max(c[j], grid[i][j]);
            }
        }
        int ans = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            /* code */
            for (int j = 0; j < grid.size(); j++)

                ans += min(r[i], c[j]) - grid[i][j];
        }
        return ans;
    }
};