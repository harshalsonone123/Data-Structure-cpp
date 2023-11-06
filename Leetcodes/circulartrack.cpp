#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, m;
        cin >> a >> b >> m;
        if (abs(a - b) < (m - abs(a - b)))
            cout << abs(a - b) << endl;
        else
            cout << m - abs(a - b) << endl;
    }

    return 0;
}
