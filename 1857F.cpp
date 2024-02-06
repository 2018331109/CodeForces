#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define ff first
#define ss second

const int M = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;
const int N = 2e5+5;

void solve()
{
    int n;
    map<int, int>mp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        int x, y;
        cin>>x>>y;
        int z = x * x - 4 * y;
        if (z < 0)
        {
            cout << 0 << " ";
            continue;
        }
        int amb=sqrt(z);
        if(amb*amb != z)
        {
            cout<<0<<" ";
            continue;
        }

        int a=(x+amb)/2;
        int b=(x-amb)/2;

        if(a+b!=x || a-b!=amb)
        {
            cout<<0<<" ";
            continue;
        }
        if(a==b)
        {
            cout<<(mp[a]*(mp[a]-1))/2<<" ";
        }
        else
        {
            cout<<mp[a]*mp[b]<<" ";
        }


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
