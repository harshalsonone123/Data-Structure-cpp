#include <bits/stdc++.h>
using namespace std;

long long denbra(string s)
{
    long long n = s.size();
    long long x = 0;
    long long i = n / 2 - 1;
    while (i >= 0)
    {
        if (s[i] == ')')
        {
            x++;
        }
        i--;
    }
    i = n / 2;
    while (i < n)
    {
        if (s[i] == '(')
        {
            x++;
        }
        i++;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        string s;
        cin >> s;

        long long ans;
        if (n % 2 == 0)
        {
            ans = denbra(s);
        }
        else
        {
            ans = min(denbra(s.substr(1)), denbra(s.substr(0, n - 1)));
        }
        cout << ans << endl;
    }
    return 0;
}