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

vector<int>pre[2000];
map<int, pair<int, int>>pos;

void precal()
{
    int cur=1;
    int last=1;
    for(int level=1; level<=N; level++)
    {
        pre[level].assign(1, 0);
        for(int j=1; j<=level; j++)
        {
            int x=(cur*cur)+pre[level].back();
            pre[level].pb(x);
            pos[cur]= {level, j};
            cur++;
            if(cur>1000000)
            {
                return;
            }
        }
    }
}


void solve()
{
    int n;
    cin>>n;
    int ans=0;
    int row=pos[n].ff, l=pos[n].ss, r=l;
    while(row>0)
    {
        ans+=pre[row][r]-pre[row][l-1];
        l=max(l-1, 1ll);
        r=min(r, (int)pre[row-1].size()-1);
        row--;
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    precal();

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
