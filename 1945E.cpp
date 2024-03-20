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

void solve()
{
    int n, m;
    cin>>n>>m;
    int a[n+1];
    int x=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]==m)
        {
            x=i;
        }
    }
    int l=1, r=n+1;
    while(l<r-1)
    {
        int mid=(r+l)/2;
        if(a[mid]<=m)
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
    }

    cout<<1<<" "<<x<<" "<<l<<endl;
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
