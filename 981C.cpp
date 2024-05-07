#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N=2e5+5;
vector<int>graph[N];
vector<int>ans;

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        graph[i].clear();
    }
    ans.clear();
    for(int i=1; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        graph[a].pb(b), graph[b].pb(a);
    }
    int cnt=0, common=0;
    for(int i=1; i<=n; i++)
    {
        int sz=graph[i].size();
        if(sz==1)
        {
            ans.pb(i);
        }
        else if(sz>2)
        {
            if(cnt>0)
            {
                no;
                return;
            }
            else
            {
                cnt++;
                common=i;
            }
        }
    }
    if(common==0)
    {
        common=ans.back();
        ans.pop_back();
    }
    yes;
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<common<<" "<<ans[i]<<endl;
    }


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
