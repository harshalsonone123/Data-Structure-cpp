#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        stack<char> p;
        for (int i = 0; i < s.size(); i++)
        {
            /* code */
            while (!p.empty() && p.top() == '(' && s[i] == ')')
            {
                /* code */
                p.pop();
                i++;
            }
            if (i < s.size())
                p.push(s[i]);
        }
        return p.size();
    }
};