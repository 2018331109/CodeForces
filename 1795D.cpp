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
int n, a, b, c, ans=1;

int modInverse(int base, int pow)
{
    int res=1ll;
    while(pow)
    {
        if(pow%2ll)
        {
            res=(res*base)%md;
            pow--;
        }
        else
        {
            pow/=2ll;
            base=(base*base)%md;
        }


    }
    return res%md;
}
void solve()
{
    int n;
    cin>>n;
    int triangles=n/3;
    for(int i=triangles; i>triangles/2; i--)
    {
        ans=(ans*i)%md;
    }
    for(int i=1; i<=triangles/2; i++)
    {
        ans=(ans*modInverse(i, md-2))%md;
    }

    for(int i=1; i<=triangles; i++)
    {
        cin>>a>>b>>c;
        int mn=min(a, min(b, c));
        int cnt=(a==mn)+(b==mn)+(c==mn);
        ans=(ans*cnt)%md;
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
