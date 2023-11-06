#include <bits/stdc++.h>
using namespace std;

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void updateArr(int a[], int n)
{
    for (int i = 0; i < n; i++)

        if ((i + 1) % 2 == 1)
            a[i]++;

        else
            a[i]--;

    printArr(a, n);
}

int main()
{
    int a[] = {3, 6, 8};
    int n = sizeof(a) / sizeof(a[0]);
    updateArr(a, n);

    return 0;
}
