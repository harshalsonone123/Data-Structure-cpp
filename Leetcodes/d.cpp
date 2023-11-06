#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll ans = 0, ans2 = 0;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n % 2 == 0)
    {
        for (ll i = 0; i < n / 2; i++)
        {
            ans += arr[i];
        }
        for (ll i = n / 2; i < n; i++)
        {
            ans2 += arr[i];
        }
    }
    else
    {
        for (ll i = 0; i < n / 2; i++)
        {
            ans += arr[i];
        }
        for (ll i = n / 2 + 1; i < n; i++)
        {
            ans2 += arr[i];
        }
    }
    if (ans > ans2)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
    }
}

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}