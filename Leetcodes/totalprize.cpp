#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        int ans;
        ans = 10 * X + 90 * Y;
        cout << ans << endl;
    }

    return 0;
}
