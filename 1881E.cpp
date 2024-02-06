#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define ff first
#define ss second

const int M = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;
const int N = 2e5+5;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int>dp(n+1, 0);
    dp[n-1]=1;

    for(int i=n-2; i>=0; i--)
    {
        int p=1+dp[i+1];
        int q=INF;
        if(i+a[i]+1<=n)
        {
            q=dp[i+a[i]+1];
        }
        dp[i]=min(p, q);
    }

    cout<<dp[0]<<endl;
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
