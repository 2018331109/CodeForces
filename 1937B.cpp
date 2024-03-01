#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int md=998244353;

void solve()
{
    int n;
    cin>>n;
    string a, b;
    cin>>a>>b;
    string ans;
    ans+=a[0];
    int ind=-1;
    int i=0;
    while(i<n-1)
    {
        if(a[i+1]=='0' || b[i]==a[i+1])
        {
            ans+=a[i+1];
        }
        else
        {
            ind=i;
            break;
        }
        i++;
        ind=i;
    }

    while(i<n)
    {
        ans+=b[i];
        i++;
    }

    int cnt=1;
    int u=ind, d=ind-1;
    while(d>=0 and (a[u]==b[d]))
    {
        cnt++, u--, d--;
    }

    cout<<ans<<endl;
    cout<<cnt<<endl;
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
