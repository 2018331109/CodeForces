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

int a[N];
int ceil_div(int x, int y)
{
    return (x+y-1)/y;
}
void solve()
{
    int n, k;
    cin>>n>>k;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    if(sum<=k)
    {
        cout<<0<<endl;
        return;
    }
//    if(sum==k+1)
//    {
//        cout<<1<<endl;
//        return;
//    }
    sort(a+1, a+n+1);
    int dif=sum-k;
    int ans=sum-k;
    sum=0;
    for(int i=n; i>1; i--)
    {
        sum+=a[i];
        int x;
        if(sum-(n-i+1)*a[1]>=dif)
        {
            x=0;
        }
        else
        {
            x=max(ceil_div(dif-sum+(n-i+1)*a[1], n-i+2), 0ll);
        }
        ans=min(ans, x+n-i+1);
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
