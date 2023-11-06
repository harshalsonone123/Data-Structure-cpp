#include <bits/stdc++.h>
#define int long long 
using namespace std;
void solve()
{ 
    int n;
    cin>>n;
    string s;
    cin>>s;
    int m;
    int dp[n];
    int dp2[n];
    dp[0]=1;
    dp2[0]=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i-1])
        {
            dp[i]=dp2[i-1];
            dp2[i]=dp2[i-1];
        }
        else
        {
            dp[i]=dp[i-1]*2;
            dp[i]%=m;
            dp2[i]=dp2[i-1];
        }
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        res+=dp[i];
        res%=m;
    }
    cout<<res<<endl;
     
}
 
signed main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}