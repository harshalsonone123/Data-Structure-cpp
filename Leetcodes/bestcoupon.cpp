#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        double x;
        cin >> x;
        if (x > 1000)
        {
            int a = x / 10;
            cout << a << endl;
        }
        else
        {
            cout << 100 << endl;
        }
    }

    return 0;
}
