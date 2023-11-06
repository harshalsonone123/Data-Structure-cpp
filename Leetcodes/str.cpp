#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int x, y;
        cin >> x >> y;
        int z = x ^ y, a = 2 ^ x, b = 2 ^ y, c = 2 ^ z;
        vector<int> arr = {2};
        if (a & 1)
            arr.push_back(a);
        if (b & 1)
            arr.push_back(b);
        if (c & 1)
            arr.push_back(c);
        sort(arr.begin(), arr.end());
        for_each(arr.begin(),
                 arr.end(),
                 [](const auto &ans)
                 {
                     cout << ans << " ";
                 });
        cout << endl;
    }

    return 0;
}
