#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        int Na, Nb, Nc, Nd;
        cin >> Na >> Nb >> Nc >> Nd;
        int ans = max(Na, max(Nb, max(Nc, Nd)));
        cout << ans << endl;
    }

    return 0;
}
