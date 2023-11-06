#include <iostream>
#include <algorithm>
using namespace std;

int kthsmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}

int main(int argc, char const *argv[])
{
    int arr[] = {
        1,
        56,
        87,
        67,
        54,
    };
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;

    cout << "kth smallest element is " << kthsmallest(arr, n, k);

    return 0;
}
