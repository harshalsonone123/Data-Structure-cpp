#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            /* code */
            cin >> a[j];
        }
        for (int k = 0; k < n; k++)
        {
            /* code */
            cin >> a[k];
        }
        if (a[i] + a[j] + a[k] = a[n] && 1 <= i < j < k <= n)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
