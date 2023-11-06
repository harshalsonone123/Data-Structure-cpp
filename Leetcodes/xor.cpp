#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)

    {
        int N;
        string S;
        cin >> N >> S;
        int ans = 0;
        for (int i = 0; i < N / 2; i++)
        {
            if (S[i] != S[N - i - 1])
                ans++;
        }
        cout << (ans + 1) / 2 << endl;
    }

    return 0;
}
