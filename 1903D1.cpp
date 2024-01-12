#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define neg cout<<-1<<endl;
#define ff first
#define ss second

const int mod = 1e9 + 7;
const int md = 998244353;
const int INF = 1e18;

int a[100005], b[100005];
void solve()
{
    int n, q;
    cin>>n>>q;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    while(q--)
    {
        int k;
        cin>>k;
        int ans=0;
        for(int i=60; i>=0 && k>=0; i--)
        {
            unsigned __int128 res=0;
            for(int j=0; j<n; j++)
            {
                if(!(a[j] & (1ll<<i)))
                {
                    res+=(1ll<<i)-a[j]%(1ll<<(i+1ll));
                }
            }
            if(res<=k)
            {
                ans+=1ll<<i;
                k-=res;
                for(int j=0; j<n; j++)
                {
                    if(!(a[j] & (1ll<<i)))
                    {
                        a[j]+=(1ll<<i)-a[j]%(1ll<<(i+1ll));
                    }
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            a[i]=b[i];
        }
        cout<<ans<<endl;
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
