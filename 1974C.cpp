#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;


void solve()
{
    int n;
    cin>>n;
    vector<int>v(n, 0);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    map<pair<pair<int, int>, int>, int>mp;
    map<pair<int, int>, int>mp12, mp23, mp13;
    for(int i=0; i<n-2; i++)
    {
        mp[ {{v[i], v[i+1]}, v[i+2]}]++;
        mp12[ {v[i], v[i+1]}]++;
        mp23[ {v[i+1], v[i+2]}]++;
        mp13[ {v[i], v[i+2]}]++;
    }
    int ans=0;
    for (auto it : mp)
    {
        int a = it.ff.ff.ff;
        int b = it.ff.ff.ss;
        int c = it.ff.ss;
        int abc=it.ss;
        int ab=mp12[ {a, b}];
        ans+=(ab-abc)*abc;
        int bc=mp23[ {b, c}];
        ans+=(bc-abc)*abc;
        int ac=mp13[ {a, c}];
        ans+=(ac-abc)*abc;

    }
    cout<<ans/2<<endl;
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
