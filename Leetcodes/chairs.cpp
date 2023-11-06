#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if ((b - a) % 3 == 0 || (b - a) % 3 == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
