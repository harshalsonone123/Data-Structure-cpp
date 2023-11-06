#include <iostream>
using namespace std;

class Solution
{
    int minimumWhiteTiles(string floor, int numCarpet, int CarpetLen)
    {
        int N = floor.size(), sum = 0;
        vector<int> cover(N);
        for (int i = 0, white = 0; i < N; ++i)
        {
            sum += floor[i] - '0';
            white += floor[i] - '0';
            if (i - CarpetLen)
                white -= floor[i - CarpetLen] - '0';
            cover[i] = white;
        }
        vector<int> dp(N + 1);
        for (int i = 1; i <= numCarpet; ++i)
        {
            vector<int> dp(N + 1);
            for (int j = 0; j < N; ++j)
            {
                next[j + 1] = max(next[j], (j - CarpetLen + 1 >= 0 ? dp[j - CarpetLen + 1] : 0) + cover[j]);
            }
            swap(dp, next);
        }
        return sum - dp[N];
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
