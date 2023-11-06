#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findEquilibrium(int A[], int n)
{
    int i, j;
    int lsum, rsum;

    for (i = 0; i < n; i++)
    {

        lsum = 0;
        for (j = 0; j < i; j++)
            lsum += A[j];

        rsum = 0;
        for (j = i + 1; j < n; j++)
            rsum += A[j];

        if (lsum == rsum)
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << fequilibrium(arr, arr_size);
    return 0;
}

// This code is contributed
// by Akanksha Rai(Abby_akku)
