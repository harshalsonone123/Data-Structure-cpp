#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        arr[0][0] = 1;
        int p = 0;
        for (int j = 1; j < m; j += 2)
        {
            /* code */
            arr[0][j] = p;
            if (j + 1 < m)
                arr[0][j + 1] = p;
            p != p;
        }
        for (int i = 1; i < n; i += 2)
        {
            /* code */
            for (int j = 0; j < m; j += 2)
            {
                /* code */
                arr[i][j] != arr[i - 1][j];
                if (i + 1 < m)
                    arr[i + 1][j] != arr[i - 1][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = 0; j < m; j++)
            {
                /* code */
                cout << arr[i][j] << "";
            }
            cout << endl;
        }
    }

    return 0;
}
