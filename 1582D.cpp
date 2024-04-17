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
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n%2==0)
    {
        for(int i=1; i<n; i+=2)
        {
            b[i]=a[i-1], b[i-1]=-a[i];
        }
    }
    else
    {
        for(int i=1; i<n-3; i+=2)
        {
            b[i]=a[i-1], b[i-1]=-a[i];
        }
        if((a[n-2]>0 and a[n-3]>0) or (a[n-2]<0 and a[n-3]<0))
        {
            b[n-3]=a[n-1], b[n-2]=a[n-1], b[n-1]=-a[n-2]-a[n-3];
        }
        else if((a[n-1]>0 and a[n-3]>0) or (a[n-1]<0 and a[n-3]<0))
        {
            b[n-3]=a[n-2], b[n-1]=a[n-2], b[n-2]=-a[n-1]-a[n-3];
        }
        else
        {
            b[n-1]=a[n-3], b[n-2]=a[n-3], b[n-3]=-a[n-1]-a[n-2];
        }

    }
    for(auto it:b)
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
