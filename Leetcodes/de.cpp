#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, bit[32] = {};
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            int A, j = 0;
            cin >> A;
            while (A)
            {
                if (bit[j] == 0)
                    bit[j] = A % 2;
                A /= 2;
                j++;
            }
        }
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            ans += bit[i];
        }
        cout << ans << endl;
    }
    return 0;
}
