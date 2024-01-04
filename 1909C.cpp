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
    int n, ans=0;
    cin>>n;
    vector<pair<int, char>>interval;
    vector<int>dif, wt;
    stack<int>st;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        interval.pb({x, 'l'});

    }
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        interval.pb({x, 'r'});
    }
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        wt.pb(x);
    }
    sort(interval.begin(), interval.end());
    for(int i=0; i<n+n; i++)
    {
        if(interval[i].ss=='l')
        {
            st.push(interval[i].ff);
        }
        else
        {
            dif.pb(interval[i].ff-st.top());
            st.pop();
        }
    }
    sort(dif.begin(), dif.end(), greater<int>());

    sort(wt.begin(), wt.end());

    for(int i=0; i<n; i++)
    {
        ans+=wt[i]*dif[i];
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
