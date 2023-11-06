#include <bits/stdc++.h>
using namespace std;

void bin(unsigned n)
{
    int binaryNum[32];
    int i;
    while (n > 0)
    {
        /* code */
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j > 0; j--)
    {
        /* code */
        cout << binaryNum[j];
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int k[t];
    cin >> k[i];
    while (t--)
    {
        /* code */
        int n;
        cin >> n;

        for (int j = 1; j <= k[i] * k[i]; i++)
        {
            char buff[33];
            if (c != k[i])
            {
                bin(j);
                cout << "";
                n++;
            }
            else
            {
                bin(j);
                cout << '\n';
                n = 1;
            }
        }
    }

    return 0;
}
