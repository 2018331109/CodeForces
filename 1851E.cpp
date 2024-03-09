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
const int N = 200005;

vector<int> adj[N], cost, check;

void dfs(int node)
{
    check[node] = 1;
    int total = 0, child = 0;
    for (int it : adj[node])
    {
        child++;
        if (!check[it])
        {
            dfs(it);
        }
        total += cost[it];
    }

    if (child == 0)
    {
        total = INF;
    }

    cost[node] = min(total, cost[node]);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    cost.assign(n + 2, INF), check.assign(n + 2, 0);
    for (int i = 0; i <= n; i++)
    {
        adj[i].clear();
    }

    for(int i=1;i<=n;i++)
    {
        cin>>cost[i];
    }

    for (int i = 1; i <= k; i++)
    {
        int x;
        cin >> x;
        cost[x] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        int req;
        cin >> req;
        for (int j = 1; j <= req; j++)
        {
            int x;
            cin >> x;
            adj[i].pb(x);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            dfs(i);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << cost[i] << " ";
    }
    cout << endl;
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
