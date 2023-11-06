#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = n % 3;
        if (ans == 1)
            cout << "huge" << endl;
        else if (ans == 2)
            cout << "small" << endl;
        else
            cout << "normal" << endl;
    }
    return 0;
}
