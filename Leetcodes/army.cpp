#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            /* code */
            int p;
            cin >> p;
            ans = __gcd(ans, abs(p - i));
        }
        cout << ans << endl;
    }

    return 0;
}
