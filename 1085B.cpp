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
    int n, k;
    cin>>n>>k;
    int ans=INT_MAX;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            int ii=n/i;
            if(i<k)
            {
                ans=min(ans, ii*k+i);
            }
            if(ii<k)
            {
                ans=min(ans, i*k+ii);
            }
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
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
