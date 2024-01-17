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
    int h, w, xa, ya, xb, yb;
    cin>>h>>w>>xa>>ya>>xb>>yb;

    if(xa>=xb)
    {
        cout<<"Draw"<<endl;
        return;
    }

    int d=xb-xa;
    if(d%2)
    {
        //alice has winning chance.
        int a=(d+1)/2;
        int b=d/2;
        int l=max(1ll, yb-b), r=min(w, yb+b);
        if(ya-a <= l && ya+a>=r)
        {
            cout<<"Alice"<<endl;
            return;
        }
        cout<<"Draw"<<endl;
        return;
    }
    else
    {
        //bob has winning chance
        int a=d/2, b=a;
        int l=max(1ll, ya-a), r=min(w, ya+a);
        if(yb-b <= l && yb+b >= r)
        {
            cout<<"Bob"<<endl;
            return;
        }
        cout<<"Draw"<<endl;
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
