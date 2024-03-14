#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N = 200005;
int a[N], d[N];

void solve()
{
    int n, s;
    cin>>n>>s;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans=0,l=0, r=n+1, total=0;
    while(l<r)
    {
        int sum=0;
        int mid=l+(r-l)/2;
        int b[n];
        for(int i=0; i<n; i++)
        {
            b[i]=a[i]+((i+1)*mid);
        }
        sort(b, b+n);
        for(int i=0; i<mid; i++)
        {
            sum+=b[i];
        }
        if(sum>s)
        {
            r=mid;
        }
        else
        {
            ans=mid;
            total=sum;
            l=mid+1;
        }
    }

    cout<<ans<<" "<<total<<endl;

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
