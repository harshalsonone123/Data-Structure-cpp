#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(string &tiles, string &op, map<int, bool> &flag, set<string> &s)
    {
        for (int i = 0; i < tiles.size(); i++)
        {
            /* code */
            if (flag[i] == 0)
            {
                char ch = tiles[i];
                flag[i] = true;
                op.push_back(ch);
                s.insert(op);
                solve(tiles, op, flag, s);
                flag[i] = 0;
                op.pop_back();
            }
        }
    }
    int numTilePossibilities(string tiles)
    {
        set<string> s;
        string op;
        map<int, bool> flag;
        solve(tiles, op, flag, s);
        return s.size();
    }
};