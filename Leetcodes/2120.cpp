#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y >= x && y <= (x + 200))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
