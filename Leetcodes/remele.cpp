#include <iostream>
using namespace std;
class solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == val)
            {
                cnt++;
            }
            else
                nums[i - cnt] = nums[i];
        }
        return nums.size() - cnt;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
