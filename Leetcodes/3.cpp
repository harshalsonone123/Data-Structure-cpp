#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> freq;

        int n = s.length(), st = 0, end = 0, ans = 0;
        while (end < n)
        {
            /* code */
            freq[s[end]]++;
            while (freq[s[end]] != 1)
            {
                /* code */
                freq[s[st]]--;
                st++;
            }
            ans = max(ans, end - st + 1);
            end++;
        }
        return ans;
    }
};