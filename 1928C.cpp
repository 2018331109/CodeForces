#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
const int INF=1e18;
const int N=2e5+5;

void solve()
{
     int n, x;
     cin>>n>>x;
     int ans=0;
     for(int d=1;d*d<=(n-x);d++)
     {
         if((n-x)%d==0)
         {
             if(d%2==0 and (d+2)/2>=x)
             {
                 ans++;
             }
             if(n-x != d*d and ((n-x)/d)%2 == 0 and ((n-x)/d+2)/2 >= x)
             {
                 ans++;
             }
         }
     }

     for(int d=1; x!=1 and d*d<=(n+x-2); d++)
     {
         if((n+x-2)%d==0)
         {
             if(d%2==0 and (d+2)/2>x)
             {
                 ans++;
             }

             if((n+x-2)!=d*d and ((n+x-2)/d)%2==0 and ((n+x-2)/d+2)/2>x)
             {
                 ans++;
             }
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
