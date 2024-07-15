#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

void solve()
{
    int n, x;
    cin>>n>>x;
    int ans=1;
    set s{x};

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        for(auto it:s)
        {
            if(it%a) continue;
            if(it==a)
            {
                ans++;
                s= {x, x/a};
                break;
            }
            s.insert(it/a);
        }
    }

    cout<<ans<<endl;


}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    cin >> test;
    for (int tc = 0; tc < test; tc++)
    {
        solve();
    }

    return 0;
}
