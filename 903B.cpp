#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N=3e5+5;

void solve()
{
    int h1, a1, c1, h2, a2;
    cin>>h1>>a1>>c1>>h2>>a2;
    vector<string>ans;
    while(h2>0)
    {
        if(a1>=h2)
        {
            h2-=a1;
            ans.pb("STRIKE");
            break;
        }
        if(h1>a2)
        {
            h2-=a1;
            h1-=a2;
            ans.pb("STRIKE");
        }
        else
        {
            h1+=c1;
            h1-=a2;
            ans.pb("HEAL");
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cout<<it<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
