#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v[i];
    }
    int to_find;
    cin >> to_find;
    int low = 0, high = n - 1;
    int mid = (low + high) / 2;
    while (high - low > 1)
    {
        /* code */
        if (v[mid] < to_find)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if (v[mid] == low)
    {
        cout << low << endl;
    }
    else if (v[mid] == high)
    {
        cout << high << endl;
    }
    else
    {
        cout << "no value" << endl;
    }

    return 0;
}
