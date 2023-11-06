#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        if (n <= 3)
        {
            cout << -1 << endl;
        }
        for (int i = n; i > 4; i--)
        {
            /* code */
            cout << i << "";
            cout << "1 2 3 4" << endl;
        }

        return 0;
    }
}