#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }
        int min = 1, mx = m;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            ans += max(abs(arr[i] - 1), abs(arr[i] - mx));
        }
        cout << ans << endl;
    }

    return 0;
}
