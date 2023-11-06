#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> processQueries(vector<int> &queries, int m)
    {
        vector<int> vec;
        for (int i = m; i >= 1; i--)
            vec.push_back(i);
        vector<int> ans;
        for (auto x : queries)
        {
            /* code */
            int index = find(vec.begin(), vec.end(), x) - vec.begin();
            ans.push_back(m - 1 - index);
            vec.erase(vec.begin() + index);
            vec.push_back(x);
        }
        return ans;
    }
};