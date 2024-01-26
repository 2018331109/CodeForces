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
    vector<pair<int, int>>v;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        v.pb({a, b});
    }

    sort(v.begin(), v.end());

    int s1=-1, s2=-1;

    for(int i=0; i<n; i++)
    {
        int vl=v[i].ff;

        if(s1>=vl && s2>=vl)
        {
            no;
            return;
        }
        if(s1<vl)
        {
            s1=v[i].ss;
        }
        else
        {
            s2=v[i].ss;
        }

        //cout<<s1<<" "<<s2<<endl;
    }

    yes;
    return;
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
