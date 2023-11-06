#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
const int N = 1e5 + 10;
ll arr[N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int k;
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
            m[arr[i]]++;

        for (int i = 0; i < n; i++)

            if (m[arr[i]] == k)
                return arr[i];

        return -1;
    }
}
