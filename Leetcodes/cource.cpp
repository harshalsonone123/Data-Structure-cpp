#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> m >> k;
        if (n + k <= m)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
