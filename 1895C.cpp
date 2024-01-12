#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

void solve()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<map<int, int>>mp(6);
    vector<pair<int, string>> vs;
    for(auto it:v)
    {
        vs.pb({it.size(), it});
    }

    sort(vs.begin(), vs.end());
    v.clear();
    for(auto it:vs)
    {
        v.pb(it.ss);
    }
    int ans=0;
    for(auto s:v)
    {
        int total=0;
        for(auto ch:s)
        {
            total+=(ch-'0');
        }
        int a=0, b=0;
        for(int len=s.size()+2-s.size()%2; len<=10; len+=2)
        {
            if(len>2*s.size())
            {
                break;
            }
            a=0, b=0;
            for(int i=0; i<s.size()-len/2; i++)
            {
                a+=s[i]-'0';
                b+=s[s.size()-i-1]-'0';
            }

            ans+=mp[len-s.size()][total-2*a];
            ans+=mp[len-s.size()][total-2*b];
        }
        mp[s.size()][total]++;
        ans++;

    }
    cout<<ans<<endl;
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
