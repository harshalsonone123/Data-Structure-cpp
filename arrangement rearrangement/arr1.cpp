#include <iostream>
using namespace std;

void fixarray(int ar[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (ar[j] == i)
            {
                temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
                break;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (ar[i] != i)
        {
            ar[i] = -1;
        }
    }
    cout << "array after rearrangement " << endl;
    for (i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int n, ar[] = {-1, -2, -3, -3, -4, -4, -4, -4, -4, -4, -7};
    n = sizeof(ar) / sizeof(ar[0]);

    fixarray(ar, n);
    return 0;
}