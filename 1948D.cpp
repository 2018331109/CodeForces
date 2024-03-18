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
    string s;
    cin>>s;
    int n=s.size(), ans=0;
    vector<int>v(n, 0);
    for(int l=1; l*2<=n; l++)
    {
        fill(v.begin(), v.end(), 0);
        for(int i=0; i+l<n; i++)
        {
            v[i]=(s[i]==s[i+l] or s[i]=='?' or s[i+l]=='?');
        }
        for(int i=1; i<n; i++)
        {
            v[i]+=v[i-1];
        }
        if(v[l-1]==l)
        {
            ans=max(ans, 2*l);
        }
        for(int i=l; i<n; i++)
        {
            if(v[i]-v[i-l]==l)
            {
                ans=max(ans, 2*l);
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
