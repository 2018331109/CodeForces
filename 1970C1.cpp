#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;
int cnt=0;
vector<int>adj[N];

void call(int cur, int par)
{
    //cout<<"called"<<endl;
    if(adj[cur].size()==1) return;
    for(auto it:adj[cur])
    {
        if(it!=par)
        {
            cnt++;
            call(it, cur);
        }
    }
}

void solve()
{
    int n, m;
    cin>>n>>m;

    for(int i=0; i<n-1; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].pb(v), adj[v].pb(u);
    }
    int k;
    cin>>k;
    call(k, adj[k][0]);
//    cout<<cnt<<endl;
//    for(int i=1;i<=n;i++)
//    {
//        cout<<"this is i: "<<i<<endl;
//        for(auto it:adj[i])
//        {
//            cout<<it<<" ";
//        }
//        cout<<endl;
//    }
    if(cnt%2 or (n-cnt+1)%2) cout<<"Ron"<<endl;
    else cout<<"Hermione"<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    //cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
