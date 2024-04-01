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
    int n, x, y;
    cin>>n>>x>>y;
    vector<int>a(x);
    set<int>st;
    for(int i=0; i<x; i++)
    {
        cin>>a[i];
        a[i]--;
        st.insert(a[i]);
    }
    int ans=x-2;
    for(int i=0; i<x; i++)
    {
        int f=(a[i]+1)%n, s=(a[i]+2)%n;
        if(st.find(f)==st.end() and st.find(s)!=st.end())
        {
            ans++;
        }
    }

    sort(a.begin(), a.end());
    vector<int>odd, even;
    for(int i=0; i<x; i++)
    {
        int next=(i==x-1)? a[0]+n: a[i+1];
        int gap=next-a[i]-1;
        if(gap>1 and (gap&1))
        {
            odd.pb(gap);
        }
        else if(gap>0 and !(gap&1))
        {
            even.pb(gap);
        }
    }

    sort(odd.begin(), odd.end()), sort(even.begin(), even.end());
    for(auto it:odd)
    {
        if(y<(it/2))
        {
            ans+=(2*y);
            y=0;
            break;
        }
        ans+=it;
        y-=(it/2);
    }
    for(auto it:even)
    {
        if(y<(it/2))
        {
            ans+=(2*y);
            y=0;
            break;
        }
        ans+=it;
        y-=(it/2);
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
