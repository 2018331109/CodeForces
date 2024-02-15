#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
const int INF=1e18;
const int N=2e5+5;

vector<int>adj[N], visited(N), status(N);

bool call(int cur, int par)
{
    visited[cur]=1;
    status[cur]=1;
    for(auto it:adj[cur])
    {
        if(!visited[it])
        {
            bool f=call(it, cur);
            if(f)
            {
                return true;
            }
        }
        else if(status[it])
        {
            return true;
        }
    }
    status[cur]=0;
    return false;
}

void solve()
{
    int n, m;
    cin>>n>>m;
    for(int i=0; i<=n; i++)
    {
        adj[i].clear();
        visited[i]=0;
        status[i]=0;
    }

    for(int i=0; i<m; i++)
    {
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(i>1)
            {
                int a, b;
                a=v[i-1], b=v[i];
                adj[a].pb(b);
            }
        }

    }

    bool has=false;

    for(int i=1; i<=n; i++)
    {
        if(!visited[i])
        {
            bool f=call(i, i);
            if(f)
            {
                has=true;
            }
        }
    }

    if(has)
    {
        //cout<<"cycle detected!!!"<<endl;
        no;
    }
    else
    {
        //cout<<"no cycle!!!"<<endl;
        yes;
    }
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
