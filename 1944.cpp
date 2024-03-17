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

void solve()
{
    int n;
    cin>>n;
    map<int, int>mp;
    mp.clear();
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a, a+n);
    int i=0, f=0;
    for(i=0;i<n;i++)
    {
        if(mp[i]==0)
        {
            cout<<i<<endl;
            return;
        }
        else if(mp[i]==1 and f==1)
        {
            cout<<i<<endl;
            return;
        }
        if(mp[i]==1)
        {
            f=1;
        }
    }
    cout<<i<<endl;

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
