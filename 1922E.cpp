#include <bits/stdc++.h>
using namespace std;

#define int long long int
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
    int x;
    cin>>x;
    int large=-1;
    // finding the leftmost set bit in the given number;

    for(int i=62;i>=0;i--)
    {
        if(1ll<<i & x)
        {
            large=i;
            break;
        }
    }
    
    // now further finding which bits are also on along with the largest setbit;
    int cur=large+1;
    map<int, int>mp;
    for(int i=large-1;i>=0;i--)
    {
        if(1ll<<i & x)
        {
            mp[i]=cur++;
        }
    }
    vector<int>ans;
    //cout<<large<<endl;
    for(int i=0;i<large;i++)
    {
        if(mp[i])
        {
            ans.pb(mp[i]);
        }
        ans.pb(i+1);
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
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
