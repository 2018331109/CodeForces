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
const int md=998244353;

int fact[N];

void solve()
{
    int n;
    string s;
    cin>>s;
    n=s.size();
    int cnt=1;
    int initial=1;
    int total=0;
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
        }
        else
        {
            initial*=cnt;
            initial%=md;
            total+=cnt-1;
            cnt=1;
        }
    }
    initial*=cnt;
    initial%=md;
    total+=cnt-1;
    int ans=max(initial*fact[total]%md, 1ll);
    cout<<total<<" "<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    fact[1]=1;
    for(int i=2; i<N; i++)
    {
        fact[i]=(fact[i-1]*i)%md;
    }
    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
