#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pq priority_queue

double pi = 3.1415926535;

void solve()
{
    int n;
    cin >> n;
    n = 2 * n;
    unordered_map<int, int> m;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string final;
    cin >> final;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i].length(); j++)
        {
            m[a[i][j] - 'a']++;
        }
    }
    for (int i = 0; i < final.length(); i++)
    {
        m[final[i] - 'a']++;
    }
    char ans;
    for (int i = 0; i < 26; i++)
    {
        if (m[i] % 2 != 0)
        {
            ans = i;
            break;
        }
    }
    cout << (char)(ans + 'a') << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
    //    long long int n;
    // while(cin >> n){
    //   cout << solve(n) << "\n";
    // }

    return 0;
}