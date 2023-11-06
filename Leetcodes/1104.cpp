#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> pathInZigZagTree(int label)
    {
        vector<int> result;
        int depth = log2(label);

        while (depth >= 0)
        {
            /* code */
            result.insert(result.begin(), label);
            int x1 = pow(2, depth - 1);
            int x2 = pow(2, depth) - 1;
            label = x1 + (x2 - label / 2);
            depth--;
        }
        return result;
    }
};