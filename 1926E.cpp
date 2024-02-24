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
const int N=1e9;

map<int,int>mp;

void solve()
{
    int n, x;
    cin>>n>>x;
    int st=1;
    int cnt=0;
    int ans=0;
    while(true)
    {
        int now=(n-st)/(st*2);

        if(cnt+now+1>=x)
        {
            int ind=x-cnt;
            ans=st+(ind-1)*(st*2);
            break;
        }
        else
        {
            cnt+=now+1;
        }

        st*=2;

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
