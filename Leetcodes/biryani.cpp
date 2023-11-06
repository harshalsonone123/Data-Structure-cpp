#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int x;
        cin >> x;
        int a = x / 100;
        int r = x % 100;
        if (r + a <= 10)
            cout << a + r << endl;
        else
            cout << "-1" << endl;
        }

    return 0;
}
