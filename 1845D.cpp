#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

int bxp(int base, int pow)
{
    int res = 1ll;
    while (pow)
    {
        if (pow % 2ll)
        {
            res = (base * res) % mod;
            res %= mod;
        }
        pow /= 2ll;
        base *= base;
        base %= mod;
    }
    return res;
}

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int last=-1, total=0;
    int ans=0;
    int mx=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        total+=a[i];
        mx=max(mx, total);
        int dif=mx-total;

        if(dif>last)
        {
            last=dif;
            ans=mx;
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
