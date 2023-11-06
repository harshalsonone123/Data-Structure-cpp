#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, m;
        cin >> n >> m;
        int ar[n];
        vector<vector<int>> vec(n + 1);
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> ar[i];
        }
        int cnt = m, p = INT_MAX;
        while (m--)
        {
            /* code */
            int a, b;
            cin >> a >> b;
            vec[b].push_back(a);
            vec[a].push_back(b);
            p = min(p, ar[a - 1] + ar[b - 1]);
        }
        if (m % 2 == 0)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            /* code */
            if (vec[i].size() % 2 == 1)
            {
                p = min(p, ar[i - 1]);
            }
        }
        cout << p << endl;
    }

    return 0;
}
