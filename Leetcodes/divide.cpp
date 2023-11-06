#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        if (a == b && a % b == 0)
            cout << -1 << endl;
        else
        {
            long long p;
            long long cnt;

            p = cnt;
            cnt = cnt / a;
            cnt = cnt * a;
            while (true)
            {
                /* code */
                if (cnt % a == 0 && cnt % b != 0 && cnt > p)
                {
                    cout << cnt << endl;
                    break;
                }
                cnt += a;
            }
        }
    }
    return 0;
}
