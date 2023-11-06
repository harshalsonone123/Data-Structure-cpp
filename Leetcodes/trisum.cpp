#include <iostream>
using namespace std;

class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = n - 1; i > 1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                nums[j] = (nums[j] + nums[j + 1]) % 10;
            }
        }
        return nums[0];
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
