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
const int N=2e5+5;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2)
    {
        neg;
        return;
    }

    vector<int>mp(26, 0);
    for(auto it:s)
    {
        mp[it-'a']++;
        if(mp[it-'a']>(n/2))
        {
            neg;
            return;
        }
    }

    mp.assign(26, 0);
//    for(auto it:mp)
//    {
//        cout<<it<<" ";
//    }

    int f=0, cnt=0;

    for(int i=0; i<(n/2); i++)
    {
        if(s[i]==s[n-i-1])
        {
            cnt++;
            mp[s[i]-'a']++;
            f=max(f, mp[s[i]-'a']);
        }
    }

    int ans=max(f, (cnt+1)/2);
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
