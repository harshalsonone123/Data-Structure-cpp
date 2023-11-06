#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int arr[n];
        int cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
            if (arr[i] == 1)
                cnt++;

            else
            {
                ans += (cnt * (cnt + 1) / 2);
                cnt = 0;
            }
        }
        ans += (cnt * (cnt + 1) / 2);
        cout << ans << endl;
    }

    return 0;
}
