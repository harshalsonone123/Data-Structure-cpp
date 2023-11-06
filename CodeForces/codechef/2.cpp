#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int N;
        cin >> N;
        cout << (N * 1000) / 100 << endl;
    }
    return 0;
}
