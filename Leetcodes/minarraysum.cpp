#include <iostream>
using namespace std;

class Solution
{

public:
    int halveArray(vector<int> &nums)
    {
        priority_queue<double> q;
        int n = nums.size();
        double sum = 0;
        double newSum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            q.push(nums[i]);
        }
        newSum = sum / 2;
        int ct = 0;
        while (q.size())
        {
            double val = q.top();
            q.pop();
            sum -= val / 2;
            q.push(val / 2);
            ct++;
            if (sum <= newSum)
            {
                return ct;
            }
        }
        return ct;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
