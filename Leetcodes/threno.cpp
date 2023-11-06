#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        vector<vector<int>> a(r, vector<int>(c));

        a[0][0] = 1;

        int f = 0;
        for (int j = 1; j < c; j += 2)
        {

            a[0][j] = f;
            if (j + 1 < c)
                a[0][j + 1] = f;

            f = !f;
        }

        for (int i = 1; i < r; i += 2)
        {

            for (int j = 0; j < c; j++)
            {

                a[i][j] = !a[i - 1][j];
                if (i + 1 < r)
                    a[i + 1][j] = !a[i - 1][j];
            }
        }

        for (int i = 0; i < r; i++)
        {

            for (int j = 0; j < c; j++)
            {
                cout << a[i][j] << " ";
            }

            cout << "\n";
        }
    }

    return 0;
}
