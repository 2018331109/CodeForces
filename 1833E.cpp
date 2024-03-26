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

vector<int>g[N], mark(N, 0);
bool cycle;

void dfs(int cur, int par)
{
    mark[cur]=1;
    for(auto it:g[cur])
    {
        if(it==par)
        {
            continue;
        }

        if(!mark[it])
        {
            dfs(it, cur);
        }
        else if(mark[it]==1)
        {
            cycle=1;
        }
    }
    mark[cur]=2;
}

void solve()
{
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        g[i].clear();
    }

    mark.assign(n+2, 0);

    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        g[i].pb(x);
        g[x].pb(i);
    }

    int mn=0, mx=0;
    for(int i=1; i<=n; i++)
    {
        if(mark[i]==0)
        {
            mx++;
            cycle=0;
            dfs(i, -1);
            if(cycle)
            {
                mn++;
            }
        }
    }

    if(mn<mx)
    {
        mn++;
    }
    cout<<mn<<" "<<mx<<endl;


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
