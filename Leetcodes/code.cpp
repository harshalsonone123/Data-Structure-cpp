#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long a, b;
        cin >> a >> b;
        if (a >= b)
        {
            for (long long i = 0; i < b; i++)
            {
                cout << "01";
            }
            for (long long i = 0; i < a - b; i++)
            {
                cout << "0";
            }
            cout << endl;
        }
        else
        {
            for (long long i = 0; i < a; i++)
            {
                cout << "10";
            }
            for (long long i = 0; i < b - a; i++)
            {
                cout << "1";
            }
            cout << endl;
        }
    }
}