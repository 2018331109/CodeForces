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
    int n;
    cin>>n;

    string a, b;
    cin>>a>>b;
    int it1=1, it2=0;
    for(int i=0; i<n; i++)
    {
        if(a[it1] == b[it2] and a[it1]=='<')
        {
            no;
            return;
        }
        if(i%2)
        {
            it1+=2;
        }
        else
        {
            it2+=2;
        }
    }
    yes;

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
