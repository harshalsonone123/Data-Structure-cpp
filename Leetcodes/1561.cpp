#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        sort(piles.begin(), piles.end());
        int result = 0;
        for (int i = piles.size() / 3; i < piles.size(); i += 2)
        {
            /* code */
            result += piles[i];
            return result;
        }
    }
};
