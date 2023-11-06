#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, r;
        cin >> x >> y >> n >> r;
        if (r / x < n)
            cout << "-1" << endl;
        else if (r / y >= n)
            cout << "0"
                 << " " << n << endl;
        else
        {
            int p = ((r - (y * n)) / (x - y));
            if ((r - (y * n)) % (x - y) != 0)
                p = p + 1;
            cout << p << " " << n - p << endl;
        }
    }
    return 0;
}
