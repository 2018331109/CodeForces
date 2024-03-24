#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N = 200005;

int n, k, m, kk, mark[100005];
vector<int>g[100005];

void dfs(int now, int par)
{
    mark[now]=1;
    for(auto it:g[now])
    {
        if(it==par)
        {
            continue;
        }
        dfs(it, now);
        mark[now]+=mark[it];
    }
    if(mark[now]>=m)
        {
            mark[now]=0;
            kk++;
        }
}

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        g[i].clear();
    }
    for(int i=1;i<n;i++)
    {
        int u, v; cin>>u>>v;
        g[u].pb(v), g[v].pb(u);
    }
    int l=1, r=n+1, ans=1;
    while(l<=r)
    {
        m=(l+r)>>1;
        kk=0;
        dfs(1, 0);
        if(kk>k)
        {
            l=m+1, ans=m;
        }
        else
        {
            r=m-1;
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
