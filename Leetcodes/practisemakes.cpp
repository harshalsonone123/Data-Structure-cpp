#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int p1, p2, p3, p4;
    cin >> p1 >> p2 >> p3 >> p4;
    int arr[] = {p1, p2, p3, p4};
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] >= 10)
            c++;
    }
    cout << c << endl;
    return 0;
}
