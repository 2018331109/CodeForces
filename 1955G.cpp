#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N=200005;

int a[101][101], dp[101][101], ans=1, n, m;
int call(int x)
{
    dp[1][0]=dp[0][1]=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            dp[i][j]=0;
            if(a[i][j]%x==0)
            {
                dp[i][j]|=dp[i-1][j]|dp[i][j-1];
            }
        }
    }
    return dp[n][m]? x: 1;
}

void solve()
{
    cin>>n>>m;
    memset(a, 0, sizeof(dp));
    memset(dp, 0, sizeof(dp));
    ans=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }
    int gc=__gcd(a[1][1], a[n][m]);
    for(int i=1; i*i<=gc; i++)
    {
        if(gc%i==0)
        {
            ans=max(ans, call(i));
            ans=max(ans, call(gc/i));
        }
    }
    cout<<ans<<endl;

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
