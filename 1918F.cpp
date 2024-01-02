#include <bits/stdc++.h>
using namespace std;

 
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define fs first
#define sc second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

void solve()
{
    int n;
    cin>>n;
    map<int, int>mp;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        mp[a]=b;
        v[i]=b;
    }
    sort(v.begin(), v.end());
    long long ans=0;
    for(auto &it:mp)
    {
        auto pos=lower_bound(v.begin(), v.end(), it.second);
        ans+=pos-v.begin();
        v.erase(pos);
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
