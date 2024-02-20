#include<bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int N=1e6+6;

int ans[N]= {};

int call(int n)
{
    int total=0;
    while(n>0)
    {
        total+=n%10;
        n/=10;
    }
    return total;
}

void solve()
{
    int n;
    cin>>n;
    cout<<ans[n]<<endl;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i=1; i<=N; i++)
    {
        ans[i]=ans[i-1]+call(i);
    }
    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
