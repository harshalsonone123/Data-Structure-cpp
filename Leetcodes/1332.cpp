#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removePalindromeSub(string s)
    {
        if (s.size() == 0)
            return 0;
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            /* code */
            if (s[i] != s[j])
                return 2;
            i++;
            j--;
        }
        return 1;
    }
};