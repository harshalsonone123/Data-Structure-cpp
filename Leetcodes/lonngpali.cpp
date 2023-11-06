class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.length();
        vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, true));
        int a = 0, b = 0, curr = INT_MIN;
        for (int i = 0; i < n - 1; i++)
        {
            /* code */
            int k = 0;
            for (int j = i + 1; j < n; j++)
            {
                /* code */
                if (s[k] == s[j] && dp[k + 1][j - 1])
                {
                    /* code */
                    if (curr < j - k)
                    {
                        a = k;
                        b = j;
                        curr = j - k;
                    }
                }
                else
                    dp[k][j] = false;
                k++;
            }
        }
        return s.substr(a, b - a + 1);
    }
};