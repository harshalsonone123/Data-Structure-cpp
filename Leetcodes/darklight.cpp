#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 0)
        {
            if (n % 4 == 0)
            {
                cout << "OFF" << endl;
            }
            else
            {
                cout << "ON" << endl;
            }
        }
        else
        {
            if (n % 4 == 0)
            {
                cout << "ON" << endl;
            }
            else
            {
                cout << "AMBIGUOUS" << endl;
            }
        }
    }
    return 0;
}
