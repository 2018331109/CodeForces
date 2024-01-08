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

int d[102][10004];

void solve()
{
    int n, m;
    cin>>n>>m;
    string s;
 
    for(int i=0; i<n; i++)
    {
        cin>>s;
        int pos=s.find('1');
 
        if(pos==string::npos)
        {
            cout<<-1<<endl;
            return;
        }
        int dist=0;
        for(int j=0; j<m; j++)
        {
            if(s[(j+pos)%m]=='1')
            {
                dist=0;
            }
            else
            {
                dist++;
            }
            d[i][(j+pos)%m]=dist;
        }

 
        for(int j=m; j>=0; j--)
        {
            if(s[(j+pos)%m]=='1')
            {
                dist=0;
            }
            else
            {
                dist++;
            }
            d[i][(j+pos)%m]=min(dist,  d[i][(j+pos)%m]);
        }

 
    }

    int ans=INT_MAX;
    for(int i=0; i<m; i++)
    {
        int sum=0;
        for(int j=0; j<n; j++)
        {
            sum+=d[j][i];
        }
        ans=min(ans, sum);
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
