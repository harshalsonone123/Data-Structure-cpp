#include <iostream>
using namespace std;

class Solution
{
public:
    long long maximumSubsequenceCount(string text, string pattern)
    {
        int n = text.length();
        bool flag = false;

        if (pattern[0] == pattern[1])
            flag = true;

        int cnt0 = 0, cnt1 = 0;
        long long ans = 0, equalans = 0;
        if (flag)
            return (equalans + 1) * equalans / 2;

        for (int i = 0; i < n; i++)
        {
            if (text[i] == pattern[0])
                cnt0++;
            if (text[i] == pattern[1])
            {
                cnt1++;
                ans += cnt0;
            }
        }
        ans += (cnt0 > cnt1) ? cnt0 : cnt1;
        return ans;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
