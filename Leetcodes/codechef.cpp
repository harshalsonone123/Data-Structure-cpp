#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int T, N;
    cin >> T;

    while (T > 0)
    {
        cin >> N;
        cout << 2 * N << endl;
        T--;
    }

    return 0;
}
