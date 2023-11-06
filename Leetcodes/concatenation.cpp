class Solution
{
public:
    short int size = 0;
    vector<int> getConcatenation(vector<int> &nums)
    {
        if (size == 0)
        {
            size = nums.size();
        }
        if (nums.size() == 2 * size)
            return nums;
        else
        {
            nums.push_back(nums[nums.size() - size]);
            return getConcatenation(nums);
        }
    }
};