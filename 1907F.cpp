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
    int n, ans=INT_MAX;

    cin>>n;
    vector<int>v(n, 0);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    // for increasing sequence;
    int ind=-1;

    int dev=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]>v[(i+1)%n])
        {
            dev++;
            ind=(i+1)%n;
        }
    }

    if(dev<=1)
    {
        if(ind==0)
        {
            cout<<0<<endl;
            return;
        }
        ans=min(ans, min(n-ind, 2+ind));
    }

    // for decreasing sequences;

    int d=0;
    ind=-1;
    for(int i=0; i<n; i++)
    {
        if(v[i]<v[(i+1)%n])
        {
            d++;
            ind=(i+1)%n;
        }
    }

    if(d<=1)
    {
        if(d==0)
        {
            if(ind==0)
            {
                ans=min(ans, 1ll);
                cout<<ans<<endl;
                return;
            }

        }
        ans=min(ans, min(1+n-ind, 1+ind));

    }

    if(ans==INT_MAX)
    {
        neg;
        return;
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
