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
    int n, cc;
    cin>>n>>cc;
    int c=cc/2+cc%2;
    int f=-1;
    vector<pair<int, int>>v;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
        if(x>=c && x<=cc)
        {
            f=i;
        }
        if(x<c)
        {
            v.pb({x, i});
        }

    }
    sort(v.begin(), v.end());

    if(f!=-1)
    {
        cout<<1<<endl;
        cout<<f+1<<endl;
        return;

    }
    if(sum<c)
    {
        cout<<-1<<endl;
        return;
    }
    vector<int>ans;
    int total=0;
    n=v.size();
    for(int i=n-1; i>=0; i--)
    {
        if(total+v[i].ff <= cc)
        {
            total+=v[i].ff;
            ans.pb(v[i].ss+1);
        }
    }

    if(total<c)
    {
        cout<<-1<<endl;
        return;
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
