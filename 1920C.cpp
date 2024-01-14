#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int>v;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            v.pb(i);
            if(i != n/i)
            {
                v.pb(n/i);
            }
        }
    }
    int ans=0;
    for(auto it:v)
    {
        int gc=0;
        for(int i=0; i<it; i++)
        {
            int j=i+it;
            while(j<n)
            {
                gc=__gcd(gc, abs(a[j]-a[i]));
                j+=it;
            }

        }
        if(gc!=1)
        {
            ans++;
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
