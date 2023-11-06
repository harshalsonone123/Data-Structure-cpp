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
        int arr[];
        cin >> arr[];
        int n;
        cin >> n;
        int k;
        cin >> k;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
            m[arr[i]]++;

        for (int i = 0; i < n; i++)

            if (m[arr[i]] == k)
                return arr[i];

        return -1;
    }
}
