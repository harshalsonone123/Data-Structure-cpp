#include <bits/stdc++.h>

using namespace std;

int firstElement(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    for (int i = 0; i < n; i++)

        if (m[arr[i]] == k)
            return arr[i];

    return -1;
}

int main()
{
    int arr[] = {1, 2, 1, 1, 3, 3, 4, 3, 3, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    cout << firstElement(arr, n, k);
    return 0;
}
