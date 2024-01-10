#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

int bxp(int base, int power)
{
    int res=1;
    while(power)
    {
        if(power%2)
        {
            res*=base;
            res%=mod;
        }
        base*=base;
        base%=mod;
        power/=2;
    }

    return res;
}

int fact(int x)
{
    int res=1;
    for(int i=1; i<=x; i++)
    {
        res*=i;
        res%=mod;
    }
    return res;
}

int nCr(int n, int r)
{
    return (fact(n)*bxp(fact(r), mod-2)%mod*bxp(fact(n-r), mod-2)%mod) % mod;
}

int cnt(int n, int m)
{
    return nCr(n+2*m-1, 2*m);
}

void solve()
{
    int n, m;
    cin>>n>>m;
    int ans=cnt(n, m);
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
