#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(int h, int v, vector<int> &hc, vector<int> &vc)
    {
        hc.push_back(h);
        sort(hc.begin(), hc.end());
        int maxh = hc[0];
        for (int i = 1; i < hc.size(); i++)
        {
            /* code */
            maxh = max(maxh, hc[i] - hc[i - 1]);
        }
        vc.push_back(v);
        sort(vc.begin(), vc.end());
        int maxv = vc[0];
        for (int i = 1; i < vc.size(); i++)
        {
            /* code */
            maxv = max(maxv, vc[i] - vc[i - 1]);
        }
        return (1LL * maxh * maxv) % 1000000007;
    }
};