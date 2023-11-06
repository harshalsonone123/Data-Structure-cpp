#include <bits/stdc++.h> 
#define mod 1000000007//998244353
#define PI 3.141592653589 
#define ANKIT ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
const long long INF=1e18;
const long long mINF=(-1)*INF;
#define int long long int 
using namespace std;
#define pr(x) cout<<x<<'\n'; return ;
#define pry  cout<<"Yes\n";return ;
#define prn  cout<<"No\n"; return ;
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
// int X[8]={-2,-2,-1,-1,2,2,1,1};
// int Y[8]={-1,1,2,-2,1,-1,2,-2};
// int X[4]={-1,1,0,0};
// int Y[4]={0,0-1,1};
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    for (int i = 0; i < n; ++i)
    {
        /* code */
        int a;
        cin>>a;
        v.push_back({a,i+1});
      //  cin>>v[i];
    }
    sort(v.begin(),v.end());
  //  vector<pair<int,int>> ans;
    cout<<n-1<<endl;
    for (int i = 1; i < n; ++i)
    {
        /* code */
        //int temp=v[i][0];
       // int p=0;
        int p=(v[i][0])%v[i-1][0];
        if(p==0)
        { 
           // cout<<v[i]<<" ";
           cout<<v[i][1]<<" "<<0<<endl;
            continue;
        }
        v[i][0]=v[i][0]+v[i-1][0]-p;
        //cout<<v[i]<<" ";
        cout<<v[i][1]<<" "<<v[i-1][0]-p<<endl;
    }
   // cout<<endl;
}
int32_t main()
{
   ANKIT
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

int t;
cin>>t;
while(t--)
{
    solve();
}

#ifndef ONLINE_JUDGE
cerr << "[Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s] ";
#endif
return 0;  
}