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
    int n, q;
    cin>>n>>q;
    for(int i=1;i<n;i++)
    {
        cout<<i<<" "<<i+1<<endl;
    }

    int d=n-1;
    int with=2;
    while(q--)
    {
        int rq;
        cin>>rq;
        if(rq==d)
        {
            cout<<-1<<" "<<-1<<" "<<-1<<endl;
            continue;
        }
        cout<<1<<" "<<with<<" "<<n-rq+1<<endl;

        d=rq;
        with=n-rq+1;

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
