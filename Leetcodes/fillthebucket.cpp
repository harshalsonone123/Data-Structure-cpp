#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> k >> x;
        cout << abs(k - x) << endl;
    }
    return 0;
}
