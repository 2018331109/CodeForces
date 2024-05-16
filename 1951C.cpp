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

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;
    vector<int>base(n, 0), temp(n, 0);
    vector<pair<int, int>>vip;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        base[i]=x;
        vip.pb({x, i});
    }
    sort(vip.begin(), vip.end());
    for(auto it:vip)
    {
        if(k<=0)
        {
            break;
        }
        int f=it.first;
        int s=it.second;
        temp[s]=min(k, m);

        k-=min(k, m);
    }
    int ans=0;
    int extra=0;
    for(int i=0;i<n;i++)
    {
        int it=temp[i];
        if(it)
        {
            ans+=(it*base[i]);
            ans+=(extra*it);
            extra+=it;
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
