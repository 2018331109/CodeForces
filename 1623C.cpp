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

int n;
vector<int>v(N, 0), w(N, 0);

bool call(int m)
{
    for(int i=1; i<=n; i++)
    {
        w[i]=v[i];
    }
    for(int i=n; i>=3; i--)
    {
        if(w[i]<m)
        {
            return 0;
        }
        int mn=min(w[i]-m, v[i])/3;
        w[i]-=3*mn;
        w[i-1]+=mn;
        w[i-2]+=mn+mn;
    }
    return (w[1]>=m and w[2]>=m);
}

void solve()
{
    int l=0, r=0, mid, ans;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        r+=v[i];
    }
    r/=n;

    while(l<=r)
    {
        mid=(l+r)>>1;
        if(call(mid))
        {
            l=mid+1;
            ans=mid;
        }
        else
        {
            r=mid-1;
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
