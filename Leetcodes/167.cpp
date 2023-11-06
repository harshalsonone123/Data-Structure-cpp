#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0;
        int j = numbers.size() - 1;

        while (i < j)
        {
            /* code */
            int k = numbers[i] + numbers[j];

            if (k == target)
            {
                vector<int> ans{i + 1, j + 1};
                return ans;
            }

            else if (k < target)
            {
                i++;
                continue;
            }

            else if (k > target)
            {
                j--;
                continue;
            }
        }
        return numbers;
    }
};