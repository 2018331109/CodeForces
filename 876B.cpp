#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;
const int N=3e5;

void solve()
{
    int n, k, m, i, j, x, f=0;
    cin>>n>>k>>m;
    vector<int> ahm[m];
    for(i=0; i<n; i++)
    {
        cin>>x;
        ahm[x%m].push_back(x);
    }
    for(i=0; i<m; i++)
    {
        if(ahm[i].size()>=k)
        {
            cout<<"Yes"<<endl;
            for(j=0; j<k; j++)
            {
                cout<<ahm[i][j]<<" ";
            }
            f=1;
            break;
        }
    }
    if(!f)
    {
        cout<<"No";
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
