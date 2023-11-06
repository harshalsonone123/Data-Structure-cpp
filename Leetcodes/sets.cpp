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
        int n;
        cin >> n;
        string t;
        cin >> t;
        stack<char> alpha;
        string ans = " ";
        for (int i = 0; i < n; i++)
        {
            /* code */
            alpha.push(t[i]);
        }
        while (!alpha.empty())
        {
            int s1 = alpha.top() - "0";
            alpha.pop();
            if (s1 == 0)
            {
                int s2 = alpha.top() - "0";
                alpha.pop();
                int x = alpha.top() - "0";
                alpha.pop();
                int y = x * 10 + s2;
                alpha += (y - 1 + "a");
            }
            else
            {
                alpha += (alpha - 1 + "a");
            }
        }
        reverse(alpha.begin(), alpha.end());
        cout << alpha << endl;
    }

    return 0;
}
