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
    int a[n+1];
    int ctb[n+1], btc[n+2];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    ctb[0]=0, ctb[1]=0, ctb[2]=1;
    for(int i=3; i<=n; i++)
    {
        if(abs(a[i-1]-a[i-2])>abs(a[i]-a[i-1]))
        {
            ctb[i]=1;
        }
        else
        {
            ctb[i]=abs(a[i]-a[i-1]);
        }
        ctb[i]+=ctb[i-1];
    }

    btc[n+1]=0, btc[n]=0, btc[n-1]=1;

    for(int i=n-2; i>=1; i--)
    {
        if(abs(a[i]-a[i+1])>abs(a[i+1]-a[i+2]))
        {
            btc[i]=abs(a[i]-a[i+1]);
        }
        else
        {
            btc[i]=1;
        }
        btc[i]+=btc[i+1];
    }
    /*
    for(auto it:ctb)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    btc[0]=btc[1];

    for(auto it:btc)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    */

    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int a, b;
        cin>>a>>b;
        if(a<b)
        {
            cout<<ctb[b]-ctb[a]<<endl;
        }
        else
        {
            cout<<btc[b]-btc[a]<<endl;
        }
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
