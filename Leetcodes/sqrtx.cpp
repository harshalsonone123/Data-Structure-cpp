#include <iostream>
using namespace std;

class Solution
{
    int mySqrt(int x)
    {
        if (x == 0)
            return 0;
        if (x == 1)
            return 1;

        double x0 = 1;
        double x1;
        while (true)
        {
            x1 = (x0 + x / x0) / 2;
            if (abs(x1 - x0) < 1)
            {
                return x1;
            }
            x0 = x1;
        }
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
