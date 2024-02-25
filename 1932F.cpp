#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int N=1e6+6;
const int md=998244353;

vector<int>dp(N, 0), mx(N, 0), pre(N, 0);

int call(int ind, int n)
{
    if(ind>n)
    {
        return 0;
    }

    if(dp[ind]!=-1)
    {
        return dp[ind];
    }

    return dp[ind]=max(pre[ind]+call(mx[ind]+1, n), call(ind+1, n));
}

void solve()
{
    int n, m;
    cin>>n>>m;

    pre.assign(n + 2, 0);
    mx.assign(n + 2, 0);
    dp.assign(n + 2, -1);
    for(int i=1; i<=n; i++)
    {
        mx[i]=i;
    }
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        pre[x]++, pre[y+1]--;
        mx[x]=max(mx[x], y);
    }
    for(int i=1; i<=n; i++)
    {
        pre[i]+=pre[i-1];
        mx[i]=max(mx[i], mx[i-1]);
    }

    int ans=call(1, n);
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
