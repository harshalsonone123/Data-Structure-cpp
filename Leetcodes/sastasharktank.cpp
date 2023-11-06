#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b;
        cin >> a >> b;
        if (2 * a > b)
            cout << "first" << endl;
        else if (2 * a < b)
            cout << "second" << endl;
        else
            cout << "any" << endl;
    }

    return 0;
}
