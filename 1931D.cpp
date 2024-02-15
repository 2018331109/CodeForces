#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
const int INF=1e18;
const int N=1e6;



void solve()
{
     int n, x, y;
     cin>>n>>x>>y;
     map<pair<int, int>, int>mp;
     int ans=0;
     for(int i=0;i<n;i++)
     {
         int vl;
         cin>>vl;
         int modx=vl%x;
         int mody=vl%y;
         ans+=mp[{(x-modx)%x, mody}];

         mp[{modx, mody}]++;
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
