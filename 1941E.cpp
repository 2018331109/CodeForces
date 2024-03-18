#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N = 200005;

void solve()
{
    int n, m, k, d;
    cin>>n>>m>>k>>d;
    vector<vector<int>>v(n, vector<int>(m, 0));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>v[i][j];
        }
    }

    vector<int>temp(m), presum(n, 0);

    multiset<int>mst;
    for(int i=0; i<n; i++)
    {
        fill(temp.begin(), temp.end(), 0);
        mst.clear();
        temp[0]=1;
        mst.insert(temp[0]);
        for(int j=1; j<m; j++)
        {
            temp[j]=*mst.begin()+v[i][j]+1;
            mst.insert(temp[j]);
            if(j-d>=1)
            {
                mst.erase(mst.find(temp[j-d-1]));
            }
        }

        presum[i]=temp.back();

    }
    for(int i=1; i<n; i++)
    {
        presum[i]+=presum[i-1];
    }
    int ans=INF;
    for(int i=k-1; i<n; i++)
    {
        ans=min(ans, presum[i]-((i-k>=0)?presum[i-k]:0));
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
