#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> res;
        int carry = 0;
        int n = digits.size() - 1;
        int sum = digits[n] + 1;

        for (int i = n - 1; i >= 0; i--)
        {
            res.insert(res.begin(), sum % 10);
            carry = sum / 10;
            sum = digits[i] + carry;
        }

        res.insert(res.begin(), sum % 10);
        carry = sum / 10;

        if (carry > 0)
        {
            res.insert(res.begin(), carry);
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
