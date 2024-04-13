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
void call()
{
    for(int i=1; i<=n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

void solve()
{
    cin>>n;
    vector<vector<int>>v;
    vector<int>a;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=(2*i-1)*i;
        a.pb(i);
    }
    cout<<sum<<" "<<n+n<<endl;
    for(int i=n; i>0; i--)
    {
        cout<<1<<" "<<i<<" ";
        call();
        cout<<2<<" "<<i<<" ";
        call();
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
