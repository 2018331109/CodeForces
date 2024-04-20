#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N=2e5+5;



void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int>a(1001, 0);
    int ans=0;
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<m; i++)
    {

        for(int j=0; j<i; j++)
        {
            if(a[i]>a[j])
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
