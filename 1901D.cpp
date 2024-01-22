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


void solve()
{
    int n;
    cin>>n;
    int arr[n+2];
    int prefix[n+2], suffix[n+2];
    memset(prefix, 0, sizeof(prefix));
    memset(suffix, 0, sizeof(suffix));
    int mx=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        mx=max(mx, arr[i]);
    }
    for(int i=1; i<=n; i++)
    {
        prefix[i]=max(prefix[i-1], arr[i]+n-i);
    }
    for(int i=n; i>=1; i--)
    {
        suffix[i]=max(suffix[i+1], arr[i]+i-1);
    }

    int ans=INF;

    for(int i=1; i<=n; i++)
    {
        ans=min(ans, max(prefix[i-1], suffix[i+1]));
        //cout<<ans<<endl;
    }
    ans=max(ans, mx);
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
