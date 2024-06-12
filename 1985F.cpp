#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int N = 2e5+5;
const int INF=1e18;
int M=998244353;

void solve()
{
    int h, n;
    cin>>h>>n;
    vector<int>a(n, 0), b(n, 0);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    int l=0, r=1e12, mid, ans;
    while(l<=r)
    {
        mid=(l+r)>>1;
        int total=h, cnt=0, turn=0, f=0;
        for(int i=0; i<n; i++)
        {
            cnt=mid/b[i]+1;
            total-=cnt*a[i];
            if(total<=0)
            {
                ans=mid;
                r=mid-1;
                f=1;
                break;
            }
        }
        if(!f) l=mid+1;
        //cout<<mid<<endl;
    }
    cout<<ans+1<<endl;

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
