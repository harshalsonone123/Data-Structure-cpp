#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int in = 0, out = 0, x = 0;
        for (int i = 0; i < s.length(); i++)
        {
            /* code */
            if (s[i] == '?')
                x++;
            if (s[i] == '(')
                in++;
            if (s[i] == ')')
                out++;
        }
        int p = abs(in - out);
        if (x > p)
            cout << "no" << endl;
        else if (p < 3)
            cout << "yes" << endl;
        else if (x < 2)
            cout << "yes" << endl;
        else
            cout << "yes" << endl;
    }
}