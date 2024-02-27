#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int N=1e6+6;
const int md=998244353;

vector<int>v(N);

void solve()
{
     int n;
     cin>>n;
     v.assign(n+1, 0);
     for(int i=1;i<=n;i++)
     {
         cin>>v[i];
         v[i]+=v[i-1];
     }

     int q;

     cin>>q;
     for(int i=0;i<q;i++)
     {
         int l, u;
         cin>>l>>u;
         int now=v[l-1]+u;
         int r=upper_bound(v.begin(), v.end(), now)-v.begin();
         if(r==n+1)
         {
             cout<<n<<" ";
             continue;
         }
         if(r==l)
         {
             cout<<r<<" ";
             continue;
         }
         //cout<<r<<endl;
         int rm=now-v[r-1];
         int vv=(v[r]-v[r-1])-((v[r]-v[r-1])/2);
         if(rm>=vv)
         {
             cout<<r<<" ";
             continue;
         }
         cout<<r-1<<" ";


     }

     cout<<endl;
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
