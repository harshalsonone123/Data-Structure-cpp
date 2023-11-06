#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int x, y, z;

    while (t--)
    {
        int div;
        cin >> x >> y >> z;
        if (x > y)
            div = x / y;
        else
            div = y / x;
        if (div < z)
            cout << z - div << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
