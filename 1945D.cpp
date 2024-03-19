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
vector<int>a(N, 0), b(N, 0);
int n, m, ans=INF;

void solve()
{

    cin>>n>>m;
    a.resize(n, 0), b.resize(n, 0);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    ans=INF;
    int c[n+1];
    c[n]=0;
    for(int i=n-1; i>=0; i--)
    {
        c[i]=min(a[i], b[i])+c[i+1];
    }
    for(int i=0; i<m; i++)
    {
        ans=min(ans, a[i]+c[i+1]);
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
