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
const int N = 200005;

vector<vector<int>>dp(101, vector<int>(2, 0));


void solve()
{
    int n, k, d;
    cin>>n>>k>>d;
    dp[0][0]=1, dp[0][1]=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            if(i-j<0)
            {
                break;
            }
            if(j<d)
            {
                dp[i][0]+=dp[i-j][0];
                dp[i][1]+=dp[i-j][1];
                dp[i][0]%=mod;
                dp[i][1]%=mod;
            }
            else
            {
                dp[i][1]+=dp[i-j][0]+dp[i-j][1];
                dp[i][1]%=mod;
            }
        }
    }

    cout<<dp[n][1]<<endl;
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
