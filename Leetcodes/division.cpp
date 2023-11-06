#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int rat;
        cin >> rat;
        if (1900 <= rat)
            cout << "Division 1" << endl;
        else if (1600 <= rat && rat <= 1899)
            cout << "Division 2" << endl;
        else if (1400 <= rat && rat <= 1599)
            cout << "Division 3" << endl;
        else if (rat <= 1399)
            cout << "Division 4" << endl;
    }
    return 0;
}
