class Solution
{
public:
    int maxor = 0;
    int cnt = 0;

    void subsets(int idx, int orval, vector<int> &nums)
    {
        if (idx >= nums.size())
        {
            if (orval == maxor)
                cnt++;

            return;
        }

        subsets(idx + 1, orval | nums[idx], nums);

        subsets(idx + 1, orval, nums);
    }
    int countMaxOrSubsets(vector<int> &nums)
    {
        for (int n : nums)
            maxor |= n;

        subsets(0, 0, nums);

        return cnt;
    }
};