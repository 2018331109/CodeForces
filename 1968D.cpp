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
vector<int>a(N, 0), p(N, 0);

void solve()
{
    int n, k, u, v;
    cin>>n>>k>>u>>v;
    for(int i=1; i<=n; i++)
    {
        cin>>p[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int mxb=0, mxs=0, b=0, s=0;
    for(int i=1; i<=n and i<=k; i++)
    {
        b+=a[u], s+=a[v];
        mxb=max(mxb, b+(k-i)*a[u]);
        mxs=max(mxs, s+(k-i)*a[v]);
        u=p[u], v=p[v];
    }

    if(mxb>mxs)
    {
        cout<<"Bodya"<<endl;
    }
    else if(mxs>mxb)
    {
        cout<<"Sasha"<<endl;
    }
    else
    {
        cout<<"Draw"<<endl;
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
