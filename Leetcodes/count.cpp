#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        unordered_map<int, int> map;
        int n;
        cin >> n;
        int a[n];
        bool res = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            map[a[i]]++;
        }
        for (auto &&it : map)
        {
            if (it.second % it.first != 0)
                res = false;
        }
        if (res)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
