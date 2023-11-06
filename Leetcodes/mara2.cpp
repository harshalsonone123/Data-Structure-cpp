#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    while (t--)
    {
        ll a, b, c, d;
        vector<ll> p(4);
        cin >> p[0];
        ll ans = 0;
        for (ll i = 1; i < 4; i++)
        {
            cin >> p[i];
            if (p[i] > p[0])
                ans += 1;
        }
        cout << ans << endl;
    }
}