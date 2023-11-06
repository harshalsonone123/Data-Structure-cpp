#include <iostream>
using namespace std;

int countNonEmptySubstr(string str)
{
    int n = str.length();
    return n * (n + 1) / 2;
}

int main(int argc, char const *argv[])
{
    string s = "uldr";
    cout << countNonEmptySubstr(s);
    return 0;
}
