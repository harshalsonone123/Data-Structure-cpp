#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findTheWinner(int n, int k)
    {
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            /* code */
            ans = (ans + k) % (i + 2);
        }
        return ans + 1;
    }
};