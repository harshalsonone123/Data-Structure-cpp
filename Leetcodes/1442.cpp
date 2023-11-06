#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countTriplets(vector<int> &arr)
    {
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            /* code */
            int val = arr[i];
            for (int j = i + 1; j < arr.size(); j++)
            {
                /* code */
                val = val ^ arr[j];
                if (val == 0)

                    ans += j - i;
            }
        }
        return ans;
    }
};