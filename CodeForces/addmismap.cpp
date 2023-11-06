#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int countNonEmptySubstr(string str)
{
    int n = str.length();
    return n * (n + 1) / 2;
}

int main(int argc, char const *argv[])
{

    int array[3][2] = {{0, 2}, {1, 3}, {9, 5}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << “Element at array[” << i
                                        << “][” << j << “] : “;
            cout << array[i][j] << endl;
        }
    }
    return 0;

    string s = "uldr";
    cout << countNonEmptySubstr(s);
    return 0;
}
