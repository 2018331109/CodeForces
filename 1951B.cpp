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
    int n, k, me;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==(k-1))
        {
            me=a[i];
        }
    }
    swap(a[0], a[k-1]);
    int ans=0, cnt=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]<a[0])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    ans=max(ans, cnt);
    swap(a[0], a[k-1]);
    int ind=-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]>me)
        {
            ind=i;
            break;
        }
    }
    if(ind==-1)
    {
        cout<<n-1<<endl;
        return;
    }
    if(ind<(k-1))
    {
        swap(a[k-1], a[ind]);
        cnt=0;
        if(ind>0)
        {
            cnt=1;
        }
        for(int i=ind+1; i<n; i++)
        {
            if(a[i]<me)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        ans=max(ans, cnt);
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
