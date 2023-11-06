#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    int x;
    int y;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int z;
        cin >> x;
        cin >> y;
        if (x == y)
        {
            cout << "0" << endl;
        }
        else if (x < y)
        {
            while (x != y)
            {
                x = x + 2;
                y = y + 1;
                z++;
                if (x == y)
                {
                    cout << z << endl;
                    break;
                }
            }
        }
        else
        {
            while (x != y)
            {
                x = x - 2;
                y = y - 1;
                z++;
                if (x == y)
                {
                    cout << z << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
