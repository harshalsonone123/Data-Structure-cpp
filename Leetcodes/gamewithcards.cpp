#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n] = {};
        cin >> a[n];
        int m;
        cin >> m;
        int b[m] = {};
        cin >> b[m];

        sort(a, a + n, greater<int>());
        sort(b, b + m, greater<int>());
        if (a[n] >= b[m])
            cout << "Alice" << endl;
        if (b[m] >= a[n])
            cout << "Bob" << endl;
    }
    return 0;
}
