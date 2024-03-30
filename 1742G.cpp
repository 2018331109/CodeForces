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

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int res=0;
    for(int j=0; j<min(32ll, n); j++)
    {
        int ind=-1, best=0;
        for(int i=j; i<n; i++)
        {
            if((res|a[i]) > best)
            {
                best=res|a[i];
                ind=i;
            }
        }
        //cout<<"ind "<<ind<<endl;
        swap(a[ind], a[j]);
        res=best;
        //cout<<res<<endl;
    }
    for(auto it:a)
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
