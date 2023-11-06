#include <iostream>
using namespace std;

class solution
{
public:
    int removeduplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        int ind = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                if (nums[i] == nums[i - 1])
                    continue;
                else
                {
                    nums[ind] = nums[i];
                    ind++;
                }
            }
        }
        nums.erase(nums.begin() + ind, nums.end());
        return nums.size();
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
