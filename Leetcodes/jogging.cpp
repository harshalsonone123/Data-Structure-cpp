#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)
#define repi(i, x, n) for (int i = x; i < n; i++)
#define br cout << endl
#define vi vector<int>
using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastio int t;
    t = 1;
    cin >> t;
    vector<int> powers;
    powers.push_back(1);
    int mod = 1000000007;
    for (int i = 0; i < 1000010; i++)
    {
        int x = powers[powers.size() - 1] * 2;
        x %= mod;
        powers.push_back(x);
    }
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int res = (powers[n - 1] * x) % mod;
        cout << res << endl;
    }
}