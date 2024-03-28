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

vector<vector<int>>dp(5005, vector<int>(5005, -1));
vector<int>vv;
int call(int i, int j)
{
    if(i==0)
    {
        return (vv[i]-1)*j;
    }
    if(i<0)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    return dp[i][j]=min(call(i-1, j), (vv[i]-1)*j+i+call(i-1, i));
}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    set<int>st;
    for(int i=0; i<=n; i++)
    {
        st.insert(i);
    }
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        st.erase(v[i]);
    }
    int mex=*(st.begin());
    vector<int>frq(mex, 0);
    for(int i=0; i<n; i++)
    {
        if(v[i]<mex)
        {
            frq[v[i]]++;
        }
    }
    vv=frq;
    for(int i=0; i<=mex; i++)
    {
        for(int j=0; j<=mex; j++)
        {
            dp[i][j]=-1;
        }
    }

    cout<<call(mex-1, mex)<<endl;

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
