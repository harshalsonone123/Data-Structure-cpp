#include <iostream>
using namespace std;

class Solution
{
public:
    long numberOfWays(string s)
    {
        long count1 = 0;
        long count0 = 0;
        long ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.charAt(i) == '1')
                count1++;
            else
                count0++;
        }

        long count1soFar = 0;
        long count0soFar = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.charAt(i) == '1')
            {
                ans += (count0soFar * count0);
                count1--;
                count1soFar++;
            }
            else
            {
                ans += (count1 * count1soFar);
                count0--;
                count0soFar++;
            }
        }
        return ans;
    }
}

int
main(int argc, char const *argv[])
{

    return 0;
}
