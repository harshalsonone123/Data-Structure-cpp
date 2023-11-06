#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        vector<long long> a(4);
        a[0] = 0;
        int x;
        cin >> x >> a[1] >> a[2] >> a[3];
        if (a[a[x]] != 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
