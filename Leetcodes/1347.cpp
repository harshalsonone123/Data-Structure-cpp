#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSteps(string s, string t)
    {
        int sc[26] = {0}, tc[26] = {0};
        int lns = s.size();

        for (int i = 0; i < lns; i++)
        {
            int sv = s[i] - 'a';
            int tv = t[i] - 'a';
            sc[sv]++;
            tc[tv]++;
        }
        int diff = 0;
        for (int i = 0; i < 26; i++)
        {
            /* code */
            if (sc[i] < tc[i])
            {
                diff += (tc[i] - sc[i]);
            }
        }
        return diff;
    }
};