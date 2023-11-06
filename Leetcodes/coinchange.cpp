#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int func(int amount, vector<int> &coins)
{
    if (amount == 0)
        return 0;
    int ans = INT_MAX;
    for (int coin : coins)
    {
        if (amount >= 0)
            ans = min(ans + 0LL, func(amount - coin, coins) + 1);
    }
    return ans;
}

int coinChange(vector<int> &coins, int amount)
{
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans;
}

int main(int argc, char const *argv[])
{
    vector<int> coins{1, 2, 5};
    cout << coinChange(coins, 11);
    return 0;
}
