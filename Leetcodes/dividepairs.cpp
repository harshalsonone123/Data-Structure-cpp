#include <iostream>
using namespace std;

class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        int i, j, k = 0;
        if (nums.size() % 2 != 0)
        {
            return false;
        }
        sort(nums.begin(), nums.end());

        for (i = 0; i < nums.size(); i += 2)
        {
            if (nums[i] == nums[i + 1])
                ;
            else
                return false;
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
