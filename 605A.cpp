#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define ff first
#define ss second

const int M = 1e9 + 7;
const int md = 998244353;
const int InF = 1e18;
const int N = 1e5+5;

void solve()
{
    int n;
    cin>>n;
    int x, dp[n+1];
    memset(dp, 0, sizeof(dp));
    int ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        dp[x]=dp[x-1]+1;
        ans=max(ans, dp[x]);
    }

    cout<<n-ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
