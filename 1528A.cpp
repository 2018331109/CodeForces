#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N=2e5+5;

int l[N], r[N], check[N][2];
vector<int>graph[N];

void dfs(int x, int y)
{
    for(auto it:graph[x])
    {
        if(it!=y)
        {
            dfs(it, x);
            check[x][0]+=max(check[it][0]+abs(l[x]-l[it]), check[it][1]+abs(l[x]-r[it]));
            check[x][1]+=max(check[it][0]+abs(r[x]-l[it]), check[it][1]+abs(r[x]-r[it]));
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>l[i]>>r[i];
        graph[i].clear();
        check[i][0]=0, check[i][1]=0;
    }
    for(int i=0; i<n-1; i++)
    {
        int u, v;
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    dfs(1, 0);
    cout<<max(check[1][0], check[1][1])<<endl;
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
