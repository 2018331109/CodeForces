#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N=3e5+5;

vector<int>pre(N, 0);

void solve()
{
    int n, k;
    cin>>n>>k;
    int ans=0;
    for(int i=0; i<k; i++)
    {
        int x, y;
        cin>>x>>y;
        if(x==y)
        {
            ans++;
        }
        else
        {
            ans+=2;
        }
    }
    cout<<pre[n-ans]<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    pre[0]=1, pre[1]=1;
    for(int i=2; i<N; i++)
    {
        pre[i]=(2ll*(i-1)*pre[i-2]+pre[i-1])%mod;
    }
    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
