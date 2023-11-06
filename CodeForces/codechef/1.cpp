#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int k = 10 * a + 5 * b;
        cout << k << endl;
    }

    return 0;
}