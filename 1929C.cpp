#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int N=2e5+5;

void solve()
{
    int k, x, a;
    cin>>k>>x>>a;
    int need=0, gain=0;
    for(int i=0;i<=x;i++)
    {
        need=gain/(k-1)+1;
        gain+=need;
        if(gain>a)
        {
            no;
            return;
        }
    }
    yes;
    return;
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
