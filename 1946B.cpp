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


int binexpo(int base, int exponent)
{
    int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

void solve()
{
    int total = 0, mx = 0, n, m;
    cin >> n >> m;
    int a[n];
    int f = 0;
    total=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
        if (total < 0)
        {
            total = (total + mod) % mod;
        }
        else
        {
            total %= mod;
        }
        if (a[i] > 0)
        {
            f = 1;
        }
    }
    if (f == 0)
    {
        cout << total << endl;
        return;
    }
    mx=a[0];
    int current_max = a[0];
    for (int i = 1; i < n; i++)
    {
        current_max = max(a[i], current_max + a[i]);
        mx = max(mx, current_max);
    }

    mx = mx % mod;

    int ans = binexpo(2, m) - 1;
    //cout<<mx<<" "<<total<<" "<<ans<<endl;
    ans = (ans * mx) % mod;
    total=(total+ans)%mod;
    cout << total << endl;
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

