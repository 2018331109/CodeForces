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

void solve()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    sort(a, a+n), sort(b, b+n);
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        int mn=INT_MAX;
        for(int j=0; j<n; j++)
        {
            mn=min(mn, abs(a[j]-b[(j+i)%n]));
        }
        mx=max(mx, mn);

    }
    cout<<mx<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
